class Solution {
public:
    int minCost(string c, vector<int>& nt) {
        int res = 0;
        for(int i=1;i<c.length();i++){
            if(c[i-1]==c[i]){
                if(nt[i-1]>nt[i]){
                    res+=nt[i];
                    swap(nt[i],nt[i-1]);
                }
                else{
                    res+=nt[i-1];
                }
            }
        }
        return res;
    }
};