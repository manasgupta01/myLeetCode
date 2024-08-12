class Solution {
public:
     int tabulate(vector<int> &dp,int ind,vector<int> nums)
    {
        int n = nums.size();
        dp[0] = nums[0];
        if(n > 1)
        {
            dp[1] = nums[1];
        }
        int pick= INT_MIN;
        int notpick =INT_MIN;
        for(int i=1;i<n;i++)
        {
            pick = nums[i];
            if(i>1) pick += dp[i-2];
            notpick = dp[i-1];
            dp[i] = max(pick,notpick);
        }
        return dp[n-1];
    }

      int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int n = nums.size();
        vector<int> dp(n-1,-1);
        vector<int> dp1(n-1,-1);
        vector<int>arr;
        for(int i=1;i<nums.size();i++){
            arr.push_back(nums[i]);
        }
        nums.pop_back();
        return max(tabulate(dp1,n-2,arr), tabulate(dp,n-2,nums));


    }
};
