class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=1,n=nums.size();
        int i;
        if(n==1){
            return nums[0];
        }
        for( i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                c++;
            }
            else{
                c=1;
            }
            if(c>n/2){
                return nums[i];
                break;
            }
        }
        return nums[i];
    }
};