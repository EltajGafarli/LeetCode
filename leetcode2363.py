class Solution:
    def mergeSimilarItems(self, items1: List[List[int]], items2: List[List[int]]) -> List[List[int]]:
      
        d: dict = {}
        for k, v in items1:
          d[k] = d.get(k,0) + v
        for k, v in items2:
          d[k] = d.get(k,0) + v
        
        result = []
        
        for k, v in d.items():
          result.append([k,v])
        result.sort()
        return result
