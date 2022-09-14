class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        d: dict = {}
        for i in s1.split():
          if i in d:
            d[i] += 1
          else:
            d[i] = 1
        for i in s2.split():
          if i in d:
            d[i] += 1
          else:
            d[i] = 1
        ans: List[str] = []
        
        for i in d.keys():
          if d[i] == 1:
            ans.append(i)
        return ans
          
