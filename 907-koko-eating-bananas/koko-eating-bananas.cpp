class Solution {
public:
    
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int left = 1 ,r = piles.size()-1;
        int right = piles[r];
        int m = (left + right)/2;
        int sum = 0;
        //  1 2 2 3 4 5 6 7 8 9 9 
        // 
        while(left<right){
            sum = 0;
            for(int i=0;i<piles.size();i++){
                double n1 = piles[i];
                double a = ceil(n1/m);
                sum+=a;
            }
            if(sum>h){
                left=m+1;
                m=(left+right)/2;
                
            }
            else{
                right = m;
                m=(left + right)/2;
            }
        }
        return m;
    }
};