class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int>freq(26,0);

        for(auto& str : s){
            freq[str - 'a']++;
        }

        for(auto& str : t){
            freq[str - 'a']--;
        }

        for(int i=0; i<26; i++){
            if(freq[i] != 0) return false;
        }
        return true;
        
    }
};
