class Solution:
    def areNumbersAscending(self, s: str) -> bool:
      ans = 0
      nums = "0123456789"
      lst: List[int] = []
      for i in range(len(s)):
        if s[i] in nums:
          ans = 10 * ans + int(s[i])
        else:
          if i < len(s) - 1:
            if s[i] not in nums and s[i - 1] in nums:
              lst.append(ans)
          ans = 0
      if s[len(s) - 1] in nums:
        lst.append(ans)
              
      return sorted(lst) == lst and len(set(lst)) == len(lst)
