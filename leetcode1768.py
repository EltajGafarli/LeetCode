#solution 1
class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
      ans: str = "";
      l1 = 0
      l2 = 0
      while l1 < len(word1) and l2 < len(word2):
        ans += word1[l1] + word2[l2]
        l1 += 1
        l2 += 1
      ans += word1[l1:] + word2[l2:]
      return ans
    
    #solution 2
    
    class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
      
      ans = "".join(list(map(lambda y:"".join(y),list(zip(word1,word2)))))
      
      ans += word1[len(ans)//2:] + word2[len(ans)//2:]
      return ans
