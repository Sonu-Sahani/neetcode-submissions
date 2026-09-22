class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int i = 0;
        if(n == 1) return nums[0];

        while(i < n){
            if((nums[i] ^ nums[i+1]) != 0) return nums[i];
            i = i + 2;
        }  
        return 0;
        
    }
};
