class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();
        int ps = 0;
        int as = sum-nums[0];
        vector<int>res;
        for(int i=0;i<nums.size()-1;i++){
           int tempps = nums[i]*i;
           int tempas = nums[i]*(nums.size()-i-1);
           int tsum = abs(tempps-ps)+abs(tempas-as);
           res.push_back(tsum);
           ps=ps+nums[i];
           as=as-nums[i+1];

        }
        int k = abs(((n-1)*(nums[n-1]))-ps);
        res.push_back(k);
        return res;
    }
};