class Solution {
public:
    void dfs(vector<vector<int>>&grid,vector<vector<bool>>&v,int i,int j){
        int n = grid.size();
        int m = grid[0].size();
       
         if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0 || v[i][j]){
            return;
        }
          v[i][j]=true;
            dfs(grid,v,i-1,j);
            dfs(grid,v,i,j+1);
            dfs(grid,v,i+1,j);
            dfs(grid,v,i,j-1);
        
    
    }
    int cntIsland(vector<vector<int>>&grid){
        int n = grid.size();
        int m = grid[0].size();
        // v[i][j]=true;
        vector<vector<bool>>v(n,vector<bool>(m,false));
        int cnt = 0;
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0 && !v[i][j]){
                    dfs(grid,v,i,j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
    int minDays(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>>v(n,vector<bool>(m,false));
        if(cntIsland(grid)!=1){
            return 0;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0 && !v[i][j]){
                    grid[i][j]=0;
                    v[i][j]=true;
                    if(cntIsland(grid)!=1){
                        return 1;
                    }
                    grid[i][j]=1;
                }
            }
        }
       return 2;
    }
};