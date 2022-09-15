class Solution:
    def reformatNumber(self, number: str) -> str:
        number: str = number.replace('-','').replace(' ','')
        ans: str = ""
        if len(number) % 3 == 1:
          for i in range(0,len(number) - 4,3):
            ans += number[i:i + 3] + "-"
          ans += number[len(number) - 4:len(number)-2] + "-" + number[len(number) - 2:]
        elif len(number) % 3 == 0:
          for i in range(0,len(number),3):
            if i < len(number) - 3:
              ans += number[i:i+3] + "-"
            else:
              ans += number[i:i+3]
        else:
          for i in range(0,len(number)-3,3):
            ans += number[i:i+3] + "-"
          ans += number[len(number) - 2:]
        return ans
