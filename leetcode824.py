class Solution:
    def toGoatLatin(self, sentence: str) -> str:
      words: List[str] = sentence.split()
      vowel: str = 'aeiou'
      for i in range(len(words)):
        temp: str = ""
        word_len: int = len(words[i])
        if words[i][0] in vowel or words[i][0] in vowel.upper():
          temp = words[i] + "ma" + "a" * (i + 1)
        else:
          temp = words[i][1:] + words[i][0] + "ma" + "a" * (i + 1)
        words[i] = temp
      return " ".join(words)
        
