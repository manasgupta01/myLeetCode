class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int c = 0;
        int m = grid[0].size();
        vector<vector<bool>>v(n,vector<bool>(m,false));
        queue<pair<int,pair<int,int>>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({0,{i,j}});
                }
            }
        }
        int rc[] = {0,1,0,-1};
        int cc[] = {1,0,-1,0}; 
        while(!q.empty()){
            int dist = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            v[row][col]=true;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow = row + rc[i];
                int ncol = col + cc[i];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && v[nrow][ncol]==false && grid[nrow][ncol]==1){
                    q.push({dist+1,{nrow,ncol}});
                    c=max(c,dist+1);
                    v[nrow][ncol]=true;
                    grid[nrow][ncol]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return c;
    }
};