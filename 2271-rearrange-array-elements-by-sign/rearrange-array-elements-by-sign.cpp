class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int a=0,b=1;
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                ans[a]=nums[i];
                a+=2;
            }
            else{
                ans[b]=nums[i];
                b+=2;
            }
        }
        return ans;
    }
};