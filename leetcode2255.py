class Solution:
    def countPrefixes(self, words: List[str], s: str) -> int:
        c: int  = 0
        for word in words:
          try:
            if s.index(word) == 0:
              c += 1
          except:
            continue
        return c
