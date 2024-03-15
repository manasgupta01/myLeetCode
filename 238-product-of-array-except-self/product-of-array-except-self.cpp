class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int p=1,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)p*=nums[i];
            if(nums[i]==0){
                c++;
            }
        }
        if(c==1){
              for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    ans[i]=0;
                }
                else{
                    ans[i]=p;
                }
                
            }
        }
        else if(c==0){
            for(int i=0;i<nums.size();i++){
                ans[i]=(p/nums[i]);
            }
        }
 
        return ans;

    }
};