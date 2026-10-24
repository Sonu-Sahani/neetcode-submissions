class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = Counter(nums)
        ans = []
        for x, freq in mp.most_common(k):
            ans.append(x)
        return ans;