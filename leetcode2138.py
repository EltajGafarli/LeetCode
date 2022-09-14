class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
      ans: List[str] = []
      size: int = len(s)
      for i in range(0,size,k):
        if i + k <= size:
          ans.append(s[i:i + k])
        else:
          ans.append(s[i:] + (k - size%k) * fill)
      return ans
        
