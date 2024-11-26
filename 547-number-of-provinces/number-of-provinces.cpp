class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool>vis(n,false);
        int c = 0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                chGrps(i,vis,isConnected);
                c++;
            }
        }
        return c;
    }
    void chGrps(int i, vector<bool>& vis, vector<vector<int>>& cc){
        queue<int>q;
        q.push(i);
        while(!q.empty()){
            int city = q.front();
            q.pop();
            for(int j=0;j<cc.size();j++){
                if(cc[city][j]==1 && !vis[j]){
                    vis[j]=true;
                    q.push(j);
                }
            }
        }
    }
};