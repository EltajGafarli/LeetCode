class Solution:
  def add(self,s: str) -> str:
    ans: int = 0
    for i in s:
      ans += int(i)
    return str(ans)
    
  def divide(self,s: str,k: int) -> List[str]:
    l = []
    for i in range(0,len(s),k):
      if i + k <= len(s):
        l.append(self.add(s[i:i + k]))
      else:
        l.append(self.add(s[i:]))
    return "".join(l)
  def digitSum(self, s: str, k: int) -> str:
    if len(s) <= k:
      return s
    ans = "".join(self.divide(s,k))
    while len(ans) > k:
      ans = self.divide(ans,k)
    return ans
