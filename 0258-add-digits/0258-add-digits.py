class Solution:
    def addDigits(self, n: int) -> int:
        return n and (n - 1) % 9 +1