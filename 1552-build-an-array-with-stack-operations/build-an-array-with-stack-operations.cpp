class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int k = 1;
        
        for (int i = 1; i <= n && k <= target.size(); i++) {
            if (i == target[k - 1]) {
                res.push_back("Push");
                k++;
            } else {
                res.push_back("Push");
                res.push_back("Pop");
            }
        }
        
        return res;
    }
};
