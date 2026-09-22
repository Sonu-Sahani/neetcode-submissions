class Solution {
public:
    bool isPalindrome(string s) {

        int n = s.length();
        vector<char> str;

        for(int i=0; i<n; i++){

            if((s[i] >='a' && s[i] <='z') || (s[i] >='0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'Z')){
                str.push_back(tolower(s[i]));
            }
        }

        int m = str.size();
        int i=0;
        int j = m-1;
        while(i < j){
            if(str[i] != str[j]) return false;
            i++;
            j--;
        }

        return true;

    }
};
