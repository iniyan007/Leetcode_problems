class Solution {
public:
    void isIsland(vector<vector<char>>& grid, int i, int j, int m, int n){
        if (i<0 || j<0 || i==m || j==n || grid[i][j]=='0') return;
        grid[i][j]='0';
        isIsland(grid,i+1,j,m,n);
        isIsland(grid,i,j+1,m,n);
        isIsland(grid,i-1,j,m,n);
        isIsland(grid,i,j-1,m,n);
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int res=0;
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if (grid[i][j]=='1'){
                    res++;
                    isIsland(grid,i,j,m,n);
                }
            }
        }
        return res;
    }
};