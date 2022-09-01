class Solution:
    def countPoints(self, rings: str) -> int:
        d: dict = {}
        c: int= 0
        for i in range(len(rings)):
          if i % 2 == 1:
            if d.get(rings[i]) == None:
              d[rings[i]] = rings[i - 1]
            else:
              d[rings[i]] += rings[i - 1]
  
        for key,value in d.items():
          if len(set(value)) == 3:
            c += 1
        return c
