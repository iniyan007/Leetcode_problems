class Solution {
public:
    // TC (n! * O(n))
    bool valid(int r, int k, vector<string>&b, int n){
        int i = r, j= k;
        for(int x = i-1;x>=0;x--){
            if(b[x][j]=='Q')return false;
        }
        i = r-1;j= k+1;
        while(j<n && i>=0){
            if(b[i--][j++]== 'Q')return false;
        }
        i = r-1; j= k-1;
        while(j>=0 && i>=0){
            if(b[i--][j--] == 'Q')return false;
        }
        return true;
    }
    void solve(vector<vector<string>>&ans,vector<string>&board,int n, int r){
        if(r == n){
            ans.push_back(board);
            return;
        }
        for(int k = 0 ; k< n;k++){
            if(valid(r, k, board, n)){
                board[r][k] = 'Q';
                solve(ans, board, n, r+1);
                board[r][k] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board;
        string s(n, '.');
        for(int i = 0; i<n;i++){
            board.push_back(s);
        }
        solve(ans, board, n, 0);
        return ans;
    }
};