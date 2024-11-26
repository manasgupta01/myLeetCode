class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>v(n,0);
        for(int i=0;i<edges.size();i++){
            v[edges[i][1]]++;
        }
        int c=0;
        int k;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                c++;
                k=i;
            }
            if(c>1){
                return -1;
            }
        }

        return k;
    }
};