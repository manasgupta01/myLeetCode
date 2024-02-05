class Solution {
public:
    int tribonacci(int n) {
        if(n==0 || n==1 || n==2){
            return (n<=1)?n:n-1;
        }
        vector<int>k;
        k.push_back(0);
        k.push_back(1);
        k.push_back(1);
        for(int i=3;i<=n;i++){
            k.push_back(k[i-1]+k[i-2]+k[i-3]);
        }
        return k[n];
    }
};