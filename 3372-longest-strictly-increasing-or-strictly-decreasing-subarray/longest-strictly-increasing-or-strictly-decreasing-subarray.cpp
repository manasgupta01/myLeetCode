class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int a=1,b=1;
        int mxa = 1,mxb = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                a++;
            }
            else a=1;
            mxa=max(a,mxa);
            if(nums[i]<nums[i-1]){
                b++;
            }
            else b=1;
            mxb=max(b,mxb);
        }
        return mxa>mxb?mxa:mxb;
    }
};