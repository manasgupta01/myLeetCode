class Solution {
public:
    vector<int> findOrder(int num, vector<vector<int>>& pre) {
        queue<int>q;
        vector<int> in(num,0);
        vector<int> ans;
        vector<int> adj[num];
        for(auto it : pre){
            adj[it[1]].push_back(it[0]);
            in[it[0]]++;
        }
        for(int i=0;i<in.size();i++){
            if(in[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int t = q.front();
            ans.push_back(t);
            q.pop();
            for(int u : adj[t]){
                in[u]--;
                if(in[u]==0){
                    q.push(u);
                }
            }
        }
      return (in.size() == ans.size() ? ans :vector<int>{});
    }
};