class Solution:
    def numberOfLines(self, widths: List[int], s: str) -> List[int]:
      result: List[int] = []
      ans: List[int] = []
      i: int = 0
      p: int = 0
      while i < len(s):
        if p + widths[ord(s[i]) - ord('a')] <= 100:
          p += widths[ord(s[i]) - ord('a')]
        else:
          result.append(p)
          p = widths[ord(s[i]) - ord('a')]
        i += 1
      result.append(p)
      return [len(result),result[len(result) - 1]]
      
