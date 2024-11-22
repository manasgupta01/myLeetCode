class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& g, vector<vector<int>>& w) {
        int c=0;
        vector<vector<int>> grid(m, vector<int>(n, 2));
        for(int i=0;i<g.size();i++){
            grid[g[i][0]][g[i][1]]=0;
           
        }
        for(int i=0;i<w.size();i++){
             grid[w[i][0]][w[i][1]]=1;
        }
        for(int k=0;k<g.size();k++){
            int i=g[k][0],j=g[k][1];
                    for(int left=j-1;left>=0;left--){
                        if(grid[i][left]==0 || grid[i][left]==1){
                            break;
                        }
                        else{
                            if(grid[i][left]==2){
                            grid[i][left]=3;
                            }
                        }
                    }
                    for(int up=i-1;up>=0;up--){
                        if(grid[up][j]==0 || grid[up][j]==1){
                            break;
                        }
                        else{
                            if(grid[up][j]==2){
                                grid[up][j]=3;                              
                            }
                        }
                    }
                    for(int right=j+1;right<n;right++){
                        if(grid[i][right]==0 || grid[i][right]==1){                     
                            break;
                        }
                        else{
                            if(grid[i][right]==2){
                                grid[i][right]=3;
                            }
                        }
                    }
                    for(int down=i+1;down<m;down++){
                        if(grid[down][j]==0 || grid[down][j]==1){
                            break;
                        }
                        else{
                            if(grid[down][j]==2){
                                grid[down][j]=3;
                            }
                        }
                    } 
        }   
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    c++;
                }
            }
        }
        return c;
    }
};