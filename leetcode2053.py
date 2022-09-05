class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
      from collections import Counter
      d: dict = Counter(arr)
      for key in d.keys():
        if d[key] == 1:
          k = k - 1
          if k == 0:
            return key
          
      return ''
