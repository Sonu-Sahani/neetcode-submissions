class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int n = heights.size();

        int i = 0;
        int j = n-1;

        int ans = INT_MIN;

        while(i < j){
            int breadth = j - i;
            int length = min(heights[i], heights[j]);

            int area = length * breadth;

            ans = max(ans, area);

            if(heights[i] > heights[j]) j--;
            else i++;
        }
        return ans;
    }
};
