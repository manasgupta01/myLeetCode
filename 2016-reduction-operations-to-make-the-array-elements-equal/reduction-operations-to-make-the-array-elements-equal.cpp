class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        if(nums[0]==nums[nums.size()-1]){
            return 0;
        }
        int c= 1;
        int res=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                res+=c;
                c++;
            }
            else{
                c++;
            }
        }
        return res;
    }
};