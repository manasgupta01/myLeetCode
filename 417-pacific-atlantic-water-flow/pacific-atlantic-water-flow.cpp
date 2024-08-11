class Solution {
    void BFS(vector<vector<int>> &heights,vector<vector<bool>> &visited1,queue<pair<int,int>> &q1,int n,int m)
    {
        while(!q1.empty())
        {
            auto curr = q1.front();
            int row = curr.first;
            int col = curr.second;
            q1.pop();
            visited1[row][col] = true;
            int delr[] = {-1,0,1,0};
            int delc[] = {0,-1,0,1};
            for(int i=0;i<4;i++)
            {
                int nr = row + delr[i];
                int nc = col + delc[i];
                if(nr>=0 && nr<n && nc >=0 && nc<m && visited1[nr][nc] != true && heights[nr][nc] >= heights[row][col])
                {
                    q1.push({nr,nc});
                    visited1[nr][nc] = true;
                }
            }
        }
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> ans;
        queue<pair<int,int>> q1;
        queue<pair<int,int>> q2;
        for (int i = 0; i < n; ++i) {
            q1.push({i, 0});
            q2.push({i, m - 1});
        }
        for (int j = 0; j < m; ++j) {
            q1.push({0, j});
            q2.push({n - 1, j});
        }

        vector<vector<bool>> visited1(n,vector<bool> (m,false));
        vector<vector<bool>> visited2(n,vector<bool> (m,false));
        BFS(heights,visited1,q1,n,m);
        BFS(heights,visited2,q2,n,m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(visited1[i][j] == true  && visited2[i][j] == true)
                {
                    vector<int> a;
                    a = {i,j};
                    ans.push_back(a);
                }
            }
        }
        return ans;
    }
};