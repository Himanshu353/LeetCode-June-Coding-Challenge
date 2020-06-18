class Solution:
    def hIndex(self, citations: List[int]) -> int:
        l=0
        res=0
        n=len(citations)
        if n==0:
            return 0
        h=len(citations)-1
        while l<=h:
            g=l+int((h-l)/2)
            if citations[g]>=(n-g):
                h=g-1
                res=n-g
            else:
                l=g+1
        return res
