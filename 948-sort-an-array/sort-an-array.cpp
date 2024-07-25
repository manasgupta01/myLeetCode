class Solution {
public:

    void mergeit(vector<int> & nums, int p , int q, int r){
        int n1 = q - p + 1;
        int n2 = r - q;
        vector<int> v1(n1);
        vector<int> v2(n2);
        for(int i=0;i<n1;i++){
            v1[i]=nums[p+i];
        }
        for(int i=0;i<n2;i++){
            v2[i] = nums[q+i+1];
        }
        int a = 0, b = 0, k = p;
        while(a<n1 && b<n2){
            if(v1[a]<=v2[b]){
                nums[k]=v1[a];
                k++;
                a++;
            }
            else{
                nums[k]=v2[b];
                k++;
                b++;
            }
        }
        while(a<n1){
              nums[k]=v1[a];
                k++;
                a++;
        }
        while(b<n2){
              nums[k]=v2[b];
                k++;
                b++;
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