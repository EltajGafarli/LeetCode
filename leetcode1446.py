class Solution:
    def maxPower(self, s: str) -> int:
      cnt: int = 1
      ans:int = 0
      for i in range(1,len(s)):
        if s[i - 1] == s[i]:
          cnt += 1
        else:
          ans = max(ans,cnt)
          cnt = 1
      ans = max(ans,cnt)
      return ans
