class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
      words = text.split()
      for i in brokenLetters:
        arr = []
        for word in words:
          if i not in word:
            arr.append(word)
        words = arr.copy()
      return len(words)
