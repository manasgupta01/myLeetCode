class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) {
        vector<vector<int>> k(m[0].size(), vector<int>(m.size(), 0));
        for (int i = 0; i < m.size(); i++) {
            for (int j = 0; j < m[0].size(); j++) {
                k[j][i] = m[i][j];
            }
        }
        return k;
    }
};
