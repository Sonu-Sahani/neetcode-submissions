class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int i = 0; i < nums.size(); i++) {
            if (seen.find(nums[i]) != seen.end()) {
                return true;           // duplicate found
            }
            seen.insert(nums[i]);      // add to hash set
        }

        return false;                   // no duplicates
    }
};
