class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>st;
        vector<vector<string>>rs;
        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(strs[i].begin(), strs[i].end()); // Corrected sort function call
            st[strs[i]].push_back(s);
        }
        for(auto i : st){
            rs.push_back(i.second);
        }
        return rs;

    }
};