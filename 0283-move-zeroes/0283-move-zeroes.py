class Solution:
    def moveZeroes(self, a: List[int]) -> None:
        l=0
        for i in range(len(a)):
            if(a[i]!=0):
                a[l],a[i]=a[i],a[l]
                l+=1
            
        