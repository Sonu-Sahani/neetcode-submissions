class Solution {
public:
    int t[101];
    int solve(vector<int>&nums, int i, int end){
        if(i > end){
            return 0;
        }

        if(t[i] != -1) return t[i];

        int steal = nums[i] + solve(nums, i+2, end);
        int skip = solve(nums, i+1, end);

        return t[i] = max(steal, skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n==1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);

        fill(begin(t), end(t), -1);
        int take_0th_index = solve(nums, 0, n-2);

        fill(begin(t), end(t), -1);
        int take_1st_index = solve(nums, 1, n-1);
        
        return max(take_0th_index, take_1st_index);
    }
};
