class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
      s: int = sum(filter(lambda x:nums.count(x) == 1,nums))
      return s
