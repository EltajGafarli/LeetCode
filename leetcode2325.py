class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
      from string import ascii_lowercase
      s: str = ascii_lowercase
      d: dict = {}
      j: int = 0
      for i in key:
        if i not in d and i != ' ':
          d[i] = s[j]
          j += 1
      ans: str = ""
      for i in message:
        if i != ' ':
          ans += d[i]
        else:
          ans += ' '
      return ans
          
      
