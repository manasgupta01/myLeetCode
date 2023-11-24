class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int sum=0;
        int a=1;
        for(int i=0;i<piles.size()/3;i++){
            sum+=piles[a];
            a=a+2;
        }
        return sum;
    }
};