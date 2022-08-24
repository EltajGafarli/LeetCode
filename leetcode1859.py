class Solution:
    def sortSentence(self, s: str) -> str:
      arr = s.split()
      arr.sort(key=lambda x:x[len(x) - 1])
      arr = list(map(lambda x:x[0:len(x) - 1],arr))
      return " ".join(arr)
