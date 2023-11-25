class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        int ps = 0;
        int as=accumulate(nums.begin(), nums.end(), 0)-nums[0];
        vector<int>res;
        for(int i=0;i<nums.size()-1;i++){
           res.push_back(abs((nums[i]*i)-ps)+abs((nums[i]*(n-i-1))-as));
           ps=ps+nums[i];
           as=as-nums[i+1];
        }
        res.push_back(abs(((n-1)*(nums[n-1]))-ps));
        return res;
    }
};