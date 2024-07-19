class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        set<int>st;
        vector<int>res;
        for(int i=0;i<matrix.size();i++){
            int mx=INT_MAX;
            for(int j=0;j<matrix[i].size();j++){
                mx=min(mx,matrix[i][j]);
            }
            st.insert(mx);
        }
        for(int i=0;i<matrix[0].size();i++){
            int mn = INT_MIN;
            for(int j=0;j<matrix.size();j++){
                mn=max(mn,matrix[j][i]);
            }
            if (st.count(mn)) {
                res.push_back(mn);    
            }
        }
        return res;
    }
};