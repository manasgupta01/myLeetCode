class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> res = image;
        int n = image.size();
        int m = image[0].size();
        queue<pair<int,int>> q;
        vector<vector<bool>> v(n,vector<bool>(m,false));
        q.push({sr,sc});
        res[sr][sc]=color;
        v[sr][sc]=true;
        int rowChng[] = {0,1,0,-1};
        int colChng[] = {1,0,-1,0};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            int t = image[row][col];
            q.pop();
            for(int i=0;i<4;i++){
                int nrow = row + rowChng[i];
                int ncol = col + colChng[i];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && v[nrow][ncol]==false && res[nrow][ncol] == t){
                    res[nrow][ncol]=color;
                    v[nrow][ncol]=true;
                    q.push({nrow,ncol});
                }
            }
        }
        return res;
    }
};