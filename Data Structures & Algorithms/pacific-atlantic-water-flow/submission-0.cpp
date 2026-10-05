class Solution {
public:
    int m, n;

    void dfs(vector<vector<int>>&heights, int i, int j, int prevCell, vector<vector<bool>>&visited){
        if(i<0 || j<0 || i>=m || j>=n || heights[i][j] < prevCell || visited[i][j]){
            return;
        }
        visited[i][j] = true;

        dfs(heights, i+1, j, heights[i][j], visited);
        dfs(heights, i-1, j, heights[i][j], visited);
        dfs(heights, i, j+1, heights[i][j], visited);
        dfs(heights, i, j-1, heights[i][j], visited);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size();
        n = heights[0].size();

        vector<vector<int>>ans;

        vector<vector<bool>>pacificVisited(m, vector<bool>(n,false));
        vector<vector<bool>>atlanticVisited(m, vector<bool>(n,false));

        //for left and right column
        for(int i=0; i<m; i++){
            dfs(heights, i, 0, INT_MIN, pacificVisited);
            dfs(heights, i, n-1, INT_MIN, atlanticVisited);
        }
        //for top and bottom row
        for(int j=0; j<n; j++){
            dfs(heights, 0, j, INT_MIN, pacificVisited);
            dfs(heights, m-1, j, INT_MIN, atlanticVisited);
        }

       

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(pacificVisited[i][j] && atlanticVisited[i][j]){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};
