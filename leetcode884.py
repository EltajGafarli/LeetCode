#Solution 1

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
          

#Solution 2
        
class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        s: str= s1 +" " + s2
        ans: List[str] = []
        for i in s.split():
          if s.split().count(i) == 1:
            ans.append(i)
        return ans
          
        
#Solution 3

class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        from collections import Counter
        count: dict = Counter((s1 + " " + s2).split())
        ans: List[str] = []
        for i in count.keys():
            if count[i] == 1:
                ans.append(i)
        return ans
