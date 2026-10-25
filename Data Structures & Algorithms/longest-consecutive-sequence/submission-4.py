class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        st = set(nums)
        ans = 0

        for x in st:
            if x-1 not in st:
                cnt = 1
            
                while x + cnt in st:
                    cnt += 1
            
                ans = max(ans, cnt)

        return ans

        