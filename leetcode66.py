class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        one = 1
        for i in range(len(digits) - 1,-1,-1):
          curr = digits[i] + one;
          if curr >= 10:
            digits[i] = curr % 10
            one = 1
          else:
            digits[i] = curr
            one = 0
        if one == 1:
          arr = [1]
          brr = [0 for i in range(len(digits))]
          arr.extend(brr)
          return arr
        return digits
