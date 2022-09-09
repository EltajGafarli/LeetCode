class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
      
      def check(word: str,d: dict) -> bool:
        for i in word:
          if i not in d or d.get(i,-1) < word.count(i):
            return False
        return True
      
      d: dict = {}
      for i in chars:
        if i in d:
          d[i] += 1
        else:
          d[i] = 1
      ans: int = 0
      for word in words:
        if(check(word,d)):
          ans += len(word)
      return ans
        
