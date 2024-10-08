class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int n = nums.size();
        if(nums.size()==1){
            return nums[0];
        }
        if (nums[0] != nums[1]){   
            return nums[0];
        }
        if (nums[n - 1] != nums[n - 2]) {
            return nums[n - 1];
        }
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            else if(mid%2!=0 && nums[mid]==nums[mid-1]){
                l=mid+1;
            }
            else if(mid%2!=0 && nums[mid]==nums[mid+1]){
                r=mid-1;
            }
            else if(mid%2==0 && nums[mid]==nums[mid-1]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return 0;
    }
};