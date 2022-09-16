class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
      d = {
        "b":0,"a":0,"l":0,"o":0,"n":0
      }
      for i in text:
        if i in d:
          d[i] += 1
      p = min(d.values())
      if p <= d["o"]//2 and p <= d["l"]//2:
        return p
      if (d["o"] >= 2 and d["l"] >= 2):
        return min(d["o"],d["l"])//2

      return 0
