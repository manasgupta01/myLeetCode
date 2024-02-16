class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> um;
        for(auto i:arr){
            um[i]++;
        }
        multiset<int> s;
        for(auto i:um){
            s.insert(i.second);
        }
        int cnt = 0;
        for(auto i:s){
            if(i<=k){
                cnt++;
                k-=i;
            }
            else break;
        }
        return um.size()-cnt;
    }
};