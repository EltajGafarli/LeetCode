class Solution:
    def judgeCircle(self, moves: str) -> bool:
        from collections import Counter
        ans = Counter(moves)
        return (abs(ans.get('U',0) - ans.get('D',0))+ abs(ans.get('R',0) - ans.get('L',0))) == 0
