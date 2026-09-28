#include <cstring>
class Solution {
public:
    // int t[46];

    // int solve(int n){
    //     if(n < 0) return 0;
    //     if(n == 0) return 1;

    //     if(t[n] != -1) return t[n];

    //     return t[n] = solve(n-1) + solve(n-2);
    // }

    int climbStairs(int n) {

        // memset(t, -1, sizeof(t));
        // return solve(n);

        vector<int>dp(n+1);

        if(n==1 || n==2 || n==3) return n;

        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;

        for(int i=3; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];


        
    }
};
