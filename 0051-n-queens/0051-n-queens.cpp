class Solution {
public:
    bool valid(vector<string>&board, int j, int i, int n){
        int k = i, x = j;
        for(int z = k-1;z>=0;z--){
            if(board[z][x] == 'Q')return false;
        }
        k = i-1; x = j+1;
        while(x<n && k>=0){
            if(board[k--][x++] == 'Q')return false;
        }
        k = i-1; x = j-1;
        while(x>=0 && k>=0)
            if(board[k--][x--] == 'Q')return false;
        return true;
    }
    void solve(vector<string>&board, vector<vector<string>>&ans, int n, int i){
        if(i == n){
            ans.push_back(board);
            return;
        }
        for(int j = 0; j<n;j++){
            if(valid(board, j, i, n)){
                board[i][j] = 'Q';
                solve(board, ans, n, i+1);
                board[i][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board;
        string s(n, '.');
        for(int i =0 ;i<n;i++){
            board.push_back(s);
        }
        solve(board, ans, n, 0);
        return ans;
    }
};