class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int>mp;

        for(auto& num : nums){
            mp[num]++;
        }

        vector<pair<int, int>>temp;

        for(auto& m : mp){
            temp.push_back(make_pair(m.second, m.first));
        }

        sort(temp.rbegin(), temp.rend());

        vector<int>ans;

 
       for(int i=0; i<k; i++){
        ans.push_back(temp[i].second);
       }

       return ans;
        
    }
};
