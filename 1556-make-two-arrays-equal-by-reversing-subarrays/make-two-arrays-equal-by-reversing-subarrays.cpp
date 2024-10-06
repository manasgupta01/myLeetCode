class Solution {
public:

    void merge(vector<int>& arr,int left, int mid, int right){
        int n1 = mid-left+1;
        int n2 = right - mid;
        vector<int> v1(n1);
        vector<int> v2(n2);
        for(int i=0;i<n1;i++){
            v1[i]=arr[left+i];
        }
        for(int i=0;i<n2;i++){
            v2[i]=arr[i+mid+1];
        }
        int l1 = 0,l2 = 0,l3 = left;
        while(l1<n1 && l2<n2){
            if(v1[l1]<=v2[l2]){
                arr[l3]=v1[l1];
                l3++;
                l1++;
            }
            else{
                arr[l3]=v2[l2];
                l3++;
                l2++;
            }
        }
        while(l1<n1){
             arr[l3]=v1[l1];
                l3++;
                l1++;
        }
        while(l2<n2){
             arr[l3]=v2[l2];
                l3++;
                l2++;
        }
    }

    void mergeSort(vector<int>& a, int l, int r){
        if(l<r){
            int m = (l+r)/2;
            mergeSort(a,l,m);
            mergeSort(a,m+1,r);
            merge(a,l,m,r);
        }
    }
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        mergeSort(target,0,target.size()-1);
        mergeSort(arr,0,arr.size()-1);
        // sort(target.begin(),target.end());
        // sort(arr.begin(),arr.end());
        if(target==arr){
            return true;
        }
        return false;
    }
};