class Solution {
public:
    void isiland(vector<vector<char>>&g, int i, int j){
        if(i<0||j<0||i==g.size()||j==g[0].size()||g[i][j] == '0')return;
        g[i][j] = '0';
        isiland(g, i+1, j);
        isiland(g, i, j+1);
        isiland(g, i-1, j);
        isiland(g, i, j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        for(int i = 0; i<grid.size();i++){
            for(int j = 0 ; j<grid[0].size();j++){
                if(grid[i][j] == '1'){
                    res++;
                    isiland(grid, i, j);
                }
            }
        }
        return res;
    }
};