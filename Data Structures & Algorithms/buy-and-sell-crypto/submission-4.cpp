class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int maxi = 0;
        int test = prices[0];
        if(n == 2) return prices[1] > test ? prices[1] - test : 0;

        for(int i=1; i<n; i++){
            test = min(test, prices[i]);

            maxi = max(maxi, prices[i]-test);
        }
        return maxi;
        
    }
};
