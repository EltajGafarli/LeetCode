class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
      arr = sentence.split()
      for i in arr:
        if searchWord in i:
          if i.index(searchWord) == 0:
            return arr.index(i) + 1
      return -1
