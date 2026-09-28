class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        int sum = accumulate(nums.begin(), nums.end(),0);
        int total = 0;

        for(int i=0; i<=n; i++){
            total += i;
        }
        return total - sum;
        
    }
};
