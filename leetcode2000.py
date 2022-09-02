class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
      ans: str = ""
      if ch not in word:
        return word
      ind: int = word.index(ch) + 1
      ans = word[0:ind]
      return ans[::-1] + word[ind:]
