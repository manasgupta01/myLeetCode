class Solution {
public:
    int memo(vector<int> &dp, int ind, vector<int>& nums) {
        if (ind == 0) return nums[0];
        if (ind < 0) return 0;
        if (dp[ind] != -1) return dp[ind];
        int pick = nums[ind] + memo(dp, ind - 2, nums);
        int notpick = memo(dp, ind - 1, nums);
        return dp[ind] = max(pick, notpick);
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
        return max(memo(dp1,n-2,arr), memo(dp,n-2,nums));


    }
};
