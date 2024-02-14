class Solution {
public:
    vector<int> rearrangeArray(vector<int> nums) {
        int a=0,b=1 , n = nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
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