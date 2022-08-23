class Solution:
    def repeatedCharacter(self, s: str) -> str:
      myset: set = set()
      for i in s:
        if i not in myset:
          myset.add(i)
        else:
          break
      return i
        
        
