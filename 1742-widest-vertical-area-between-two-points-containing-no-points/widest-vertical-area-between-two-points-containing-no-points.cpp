class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& p) {
        vector<int>k;
        for(int i=0;i<p.size();i++){
            k.push_back(p[i][0]);
        }
        for(int i=0;i<k.size();i++){
           cout<<k[i];
        }
        sort(k.begin(),k.end());
        int res=INT_MIN;
        for(int i=1;i<k.size();i++){
            res=max(res,k[i]-k[i-1]);
        }
        return res;
    }
};