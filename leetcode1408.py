#solution 1
class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
      ans: List[str] = []
      
      
      def concat(words: List[str],word) ->str:
        ans: str = ""
        for i in words:
          if i != word:
            ans += i + " "
        return ans
        
      for i in words:
        if i in concat(words,i):
          ans.append(i)
      return ans
    
    #solution 2
    
    class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
      word: str = ' '.join(words)
      return [i for i in words if word.count(i) >= 2]
      
      
