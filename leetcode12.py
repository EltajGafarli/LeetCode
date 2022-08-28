class Solution:
    def intToRoman(self, num: int) -> str:
        s = ""
        d : dict = {
          9:'IX',
          4:'IV',
          40:'XL',
          90:'XC',
          400:'CD',
          900:'CM'
        }
        while num > 0:
          if num // 1000 != 0:
            s += 'M' * (num // 1000)
            num = num % 1000
            
          if num // 100 != 0:
            x = 100 * (num // 100)
            if 100 <= x <= 300:
              s += 'C' * (x // 100)
            elif x == 400:
              s += d[400]
            elif x == 900:
              s += d[900]
            else:
              s += 'D' + 'C' * (x // 100 - 5)
            num = num % 100
            
          if num // 10 != 0:
            x = 10 * (num // 10)
            
            if 10 <= x <= 30:
              s += 'X' * (x // 10)
            elif x == 40:
              s += d[40]
            elif x == 90:
              s += d[90]
            else:
              s += 'L' + 'X' * (x // 10 - 5)
            num = num % 10
          if 1 <= num <= 3:
            s += 'I' * num
          elif num == 4:
            s += d[4]
          elif num == 9:
            s += d[9]
          elif num != 0:
            s += 'V' + 'I' * (num - 5)
          break
        return s
            
