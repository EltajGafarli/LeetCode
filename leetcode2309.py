class Solution:
    def greatestLetter(self, s: str) -> str:
      ans: str = ""
      for i in set(s.lower()):
        if i in s and i.upper() in s:
          ans = max(ans,i.upper())
      return ans
          
        
