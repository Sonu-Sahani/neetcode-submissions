class Solution {
public:
    
    void solve(vector<vector<int>>&ans, vector<int>&nums,vector<int>&curr, int target, int idx){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        if(target < 0) return;
        int n = nums.size();

        for(int i=idx; i<n; i++){
            curr.push_back(nums[i]);
            solve(ans, nums, curr, target-nums[i], i);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        
        vector<vector<int>>ans;
        vector<int>curr;
        solve(ans, nums,curr, target,0);
        return ans;

        
    }
};
