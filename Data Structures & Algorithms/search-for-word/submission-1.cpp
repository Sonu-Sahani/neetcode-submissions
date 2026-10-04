//This code workd fine in leetcode but not on neetcode so it's a platform problem, this code is correct.


class Solution {
public:
    int m,n;
    bool dfs(vector<vector<char>>& board, string &word, int i, int j, int idx){

        if(idx == word.length()) return true;

        if(i < 0 || i>=m || j < 0 || j >=n || board[i][j] == '0' ) return false;

        if(board[i][j] != word[idx]) return false;

        char temp = board[i][j];
        board[i][j] = '0';

        if(dfs(board, word, i+1, j, idx+1) || dfs(board, word, i-1, j, idx+1) || dfs(board, word, i, j+1, idx+1) || dfs(board, word, i, j-1, idx+1)) return true;

        board[i][j] = temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {

        m = board.size();
        n = board[0].size();

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j] == word[0] && dfs(board, word, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
    }
};
