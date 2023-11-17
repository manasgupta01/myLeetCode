class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        int y=INT_MIN;
        vector<int>k;
        for(int i=0;i<nums.size()/2;i++){
            k.push_back(nums[i]+nums[j]);
            if(nums[i]+nums[j]>=y){
                y=nums[i]+nums[j];
            }
            j--;
        }
        return y;
    }
};