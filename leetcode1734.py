class Solution:
    def generateTheString(self, n: int) -> str:
        return "x" + ("yx"[n & 1]) * (n - 1)
