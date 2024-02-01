class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>k1;
        for(int i=0;i<nums.size() ;i+=3){
                if(nums[i+2]-nums[i]<=k){
                    k1.push_back({nums[i],nums[i+1],nums[i+2]});
                }
                else{
                    return {};
                }
        }
        return k1;
    }
};