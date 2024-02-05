class Solution {
public:
    int fib(int n) {
        
        if(n==0 || n== 1){
            return n;
        }
        vector<int>k;
        k.push_back(0);
        k.push_back(1);
        for(int i=2;i<=n;i++){
            k.push_back(k[i-1]+k[i-2]);
        }
        return k[n];
    }
};