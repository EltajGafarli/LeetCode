class Solution:
    def freqAlphabets(self, s: str) -> str:
      ans: str = ""
      i: int = 0
      while i < len(s):
        if i < len(s) - 2:
          if s[i + 2] == '#':
            ans += chr(int(s[i:i+2]) + 96)
            i += 2
        if s[i] == '#':
          i += 1
          continue
        else:
          ans += chr(int(s[i]) + 96)
          i += 1
      return ans
