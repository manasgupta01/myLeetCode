class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        vector<int>k;
        for(int i=0;i<nums.size()/2;i++){
            k.push_back(nums[i]+nums[j]);
            j--;
        }
        int y = *max_element(k.begin(), k.end());
        return y;
    }
};