class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        from collections import Counter
        return len(set(Counter(s).values())) == 1
