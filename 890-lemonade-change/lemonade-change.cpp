class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a=0,b=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                a++;
            }
            else if(bills[i]==10){
                if(a>0){
                    b++;
                    a--;
                }
                else{
                    return false;
                }
                
            }
            else if(bills[i]==20){
                if(a>0 && b>0){
                    b--;
                    a--;
                }
                else if(a>2){
                    a=a-3;
                }
                else{
                    return false;
                }
                
            }
        }
        return true;
    }
};