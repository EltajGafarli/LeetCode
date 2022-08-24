class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
      result: List[str] = []
      if len(nums) == 0:
        return []
      if len(nums) == 1:
        return [str(nums[0])]
      mini:int = nums[0]
      maxx:int = nums[0]
      for i in range(len(nums) - 1):
        if nums[i] == nums[i + 1] - 1:
          mini = min(mini,nums[i])
          maxx = max(maxx,nums[i + 1])
        else:
          if maxx == mini:
            result.append(f"{mini}")
          else:
            result.append(f'{mini}->{maxx}')
          maxx = nums[i + 1]
          mini = nums[i + 1]
        if i == len(nums) - 2:
          if maxx == mini:
            result.append(f"{mini}")
          else:
            result.append(f'{mini}->{maxx}')
            
      return result
        
