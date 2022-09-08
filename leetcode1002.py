class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
      from collections import Counter
      ans: str = ""
      d = Counter(words[0])
      for word in words:
        for i in d:
          try:
            d[i] = min(d[i],word.count(i))
          except:
            continue
      for i in d:
        ans += i * d[i]
      return list(ans)
          
      
