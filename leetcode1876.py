class Solution:
    def countGoodSubstrings(self, s: str) -> int:
      c: int =  0
      for i in range(len(s) - 2):
        if len(set(s[i:i + 3])) == 3:
          c += 1
      return c
