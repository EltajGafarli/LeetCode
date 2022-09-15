class Solution:
    def convertTime(self, current: str, correct: str) -> int:
      current = current.split(":")
      correct = correct.split(":")
      
      minute = int(correct[0]) * 60 - int(current[0]) * 60 + int(correct[1]) - int(current[1])
      cnt = 0
      while minute > 0:
        if minute >= 60:
          cnt += minute // 60
          minute = minute % 60
        elif minute >= 15:
          cnt += minute // 15
          minute = minute % 15
        elif minute >= 5:
          cnt += minute // 5
          minute = minute % 5
        else:
          cnt += minute
          minute = 0
      return cnt
