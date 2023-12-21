class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& p) {
        sort(p.begin(), p.end(), [](const vector<int> &a, const vector<int> &b) {
            return a[0] < b[0];
        });
        int res=INT_MIN;
        for(int i=1;i<p.size();i++){
            res=max(res,p[i][0]-p[i-1][0]);
        }
        return res;
    }
};