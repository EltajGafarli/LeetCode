class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        return sum(map(lambda word:word[0:len(pref)] == pref,words))
