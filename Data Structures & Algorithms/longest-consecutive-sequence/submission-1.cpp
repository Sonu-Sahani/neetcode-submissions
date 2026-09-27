class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int>st(nums.begin(), nums.end());
        int maxlength = 0;

        for(auto& num : st){
            
            if(st.count(num - 1) == 0){
                int length = 1;

                while(st.count(num + length) != 0){
                    length++;
                }
                maxlength = max(maxlength, length);
            }
        }
        return maxlength;
        
    }
};
