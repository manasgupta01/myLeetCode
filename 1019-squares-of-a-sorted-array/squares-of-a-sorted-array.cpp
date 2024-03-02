class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=(nums[i]*nums[i]);
        }
        int n=nums.size();
       sort(nums.begin(), nums.end());
      
           return nums;
       
      
    }
};