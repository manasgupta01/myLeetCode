class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int y=INT_MIN;
        for(int i=0;i<nums.size()/2;i++){
                y=max(y,nums[i]+nums[nums.size()-1-i]);
        }
        return y;
    }
};