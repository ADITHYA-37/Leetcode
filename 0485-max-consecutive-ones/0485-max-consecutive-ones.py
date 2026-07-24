class Solution:
    def findMaxConsecutiveOnes(self, a: List[int]) -> int:
        c=ans=0
        for i in a:
            if i!=1:
                c=0
                continue
            c+=1
            if c>ans:
                ans=c
        return ans