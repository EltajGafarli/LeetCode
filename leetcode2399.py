class Solution:
    def checkDistances(self, s: str, distance: List[int]) -> bool:
      d: dict = {}
      for i in range(len(s)):
        try:
          d[s[i]] = i - d[s[i]] - 1
        except KeyError: 
          d[s[i]] = i
      for i in set(s):
        if d[i] != distance[ord(i) - ord('a')]:
          return False
      return True
