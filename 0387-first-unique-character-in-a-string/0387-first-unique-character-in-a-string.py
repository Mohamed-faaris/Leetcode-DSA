class Solution:
    def firstUniqChar(self, s: str) -> int:
        c = Counter(s)
        for i, x in enumerate(s):
            if c[x] == 1:
                return i
        return -1