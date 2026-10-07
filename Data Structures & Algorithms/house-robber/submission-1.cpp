class Solution {
public:
    // int t[101];
    // int solve(vector<int>&nums, int i){
    //     if(i >= nums.size()){
    //         return 0;
    //     }
    //     if(t[i] != -1) return t[i];

    //     int steal = nums[i] + solve(nums, i+2);
    //     int skip = solve(nums, i+1);

    //     return t[i] = max(steal, skip);
    // }
    int rob(vector<int>& nums) {
        //memset(t, -1, sizeof(t));
        // fill(begin(t), end(t), -1);
        // return solve(nums, 0);

        int n = nums.size();

        vector<int>arr(n+1,0);
        arr[0] = 0;
        arr[1] = nums[0];

        for(int i=2; i<=n; i++){
            int steal = nums[i-1] + arr[i-2];
            int skip = arr[i-1];

            arr[i] = max(steal , skip);
        }
        return arr[n];
    }
};
