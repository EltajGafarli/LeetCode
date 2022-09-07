class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
      return sum(list(map(lambda ans : "".join(ans) != "".join(sorted(ans)),zip(*strs))))
