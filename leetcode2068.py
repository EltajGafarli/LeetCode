class Solution:
    def checkAlmostEquivalent(self, word1: str, word2: str) -> bool:
      from collections import Counter
      d = {}
      for word in word1:
        if word in d:
          d[word] += 1
        else:
          d[word] = 1
      for word in word2:
        if word in d:
          d[word] -= 1
        else:
          d[word] = -1
      for i in d.keys():
        if abs(d[i]) > 3:
          return False
      return True
        
        
