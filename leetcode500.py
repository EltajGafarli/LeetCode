class Solution:
    def consist_of(self,word,test) -> bool:
      for i in word.lower():
        if i not in test:
          return False
      return True
    def findWords(self, words: List[str]) -> List[str]:
        ans : List[str] = []
        
        tests = ["qwertyuiop","asdfghjkl","zxcvbnm"]
        for s in words:
          if self.consist_of(s,tests[0]) or self.consist_of(s,tests[1]) or self.consist_of(s,tests[2]):

            ans.append(s)
        return ans
              
