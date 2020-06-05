class Solution:

    def __init__(self, w: List[int]):
        self.pre_sum = []
        pre_sum = 0
        for x in w :
            pre_sum = pre_sum + x
            self.pre_sum.append(pre_sum)
        self.total = pre_sum
        

    def pickIndex(self) -> int:
        r = self.total * random.random()
        low, high = 0,len(self.pre_sum)
        while low < high :
            mid = low + (high-low) // 2
            if r > self.pre_sum[mid] :
                low = mid + 1
            else :
                high = mid
        return low
        


# Your Solution object will be instantiated and called as such:
# obj = Solution(w)
# param_1 = obj.pickIndex()
