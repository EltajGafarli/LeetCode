class Solution:
    def findOcurrences(self, text: str, first: str, second: str) -> List[str]:
        text = text.split()
        ans = []
        for i in range(1,len(text) - 1):
          if text[i - 1] == first and text[i] == second:
            ans.append(text[i + 1])
        return ans
