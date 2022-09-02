class Solution:
    def countOfVowels(self,s: str) -> int:
      c = sum(map(lambda x:s.count(x),['a','e','o','u','i']))
      return c
    def halvesAreAlike(self, s: str) -> bool:
        s = s.lower()
        return self.countOfVowels(s[0:int(len(s)/2)]) == self.countOfVowels(s[int(len(s)/2):])
