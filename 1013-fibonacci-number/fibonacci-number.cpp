class Solution {
public:
    int fib(int n) {
        vector<int>k;
        k.push_back(0);
        k.push_back(1);
        if(n==0 || n== 1){
            return k[n];
        }
        for(int i=2;i<=n;i++){
            k.push_back(k[i-1]+k[i-2]);
        }
        return k[n];
    }
};