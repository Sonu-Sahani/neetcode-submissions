#include <cstring>
class Solution {
public:
    int t[101];

    int solve(string& s, int idx, int n){
        if(idx == n) return 1;

        if(s[idx] == '0') return 0;

        if(t[idx] != -1) return t[idx];

        int result = solve(s, idx+1, n);

        if(idx+1 < n){
            if(s[idx] == '1' || s[idx] == '2' && s[idx+1] <= '6'){
                result += solve(s, idx+2, n);
            }
        }
        return t[idx] = result;
    }
    int numDecodings(string s) {

        int n = s.length();

        memset(t, -1, sizeof(t));

        return solve(s, 0, n);
        
    } 
};
