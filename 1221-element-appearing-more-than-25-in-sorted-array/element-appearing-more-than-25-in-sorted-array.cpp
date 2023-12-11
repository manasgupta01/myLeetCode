class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int c=1;
        int n = arr.size();
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]==arr[i]){
                c++;
            }else{
                c=1;
            }
            if(c>n/4){
                return arr[i];
            }
        }
        return arr[0];
    }
};