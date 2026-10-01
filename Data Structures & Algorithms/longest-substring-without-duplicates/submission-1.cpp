class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int first = 0;
        int second = 0;
        int n = s.size();
        vector<int>count(256, 0);
        int length = 0;

        while(second < n){
            while(count[s[second]] == 1){
                count[s[first]] = 0;
                first++;
            }

            count[s[second]] = 1;
            length = max(length, second - first + 1);
            second++;
        }
        return length;
        
    }
};
