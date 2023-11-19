class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int c=1;
        int res=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                res+=c;
            }
            c++;
        }
        return res;
    }
};