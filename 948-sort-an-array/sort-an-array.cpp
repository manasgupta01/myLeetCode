class Solution {
public:

    void mergeit(vector<int> & nums, int p , int q, int r){
        
        vector<int> v1;
        int a = p, b = q+1;
        while( a <= q && b <= r){
            if(nums[a]<nums[b]){
                v1.push_back(nums[a]);
                a++;
            }
            else{
                v1.push_back(nums[b]);
                b++;
            }
        }
        while(a<=q){
                v1.push_back(nums[a]);
                a++;
        }
        while(b<=r){
              v1.push_back(nums[b]);
                b++;
        }
        a = 0;
        while(p <= r){
            nums[p++] = v1[a++];
        }
    }

    void sortit(vector<int>& nums, int l,int r){
        if(l<r){
            int m = (l+r)/2;
            sortit(nums,l,m);
            sortit(nums,m+1,r);
            mergeit(nums,l,m,r);
        }
    
    }
    vector<int> sortArray(vector<int>& nums) {
        sortit(nums,0,nums.size()-1);
        return nums;
    }
};