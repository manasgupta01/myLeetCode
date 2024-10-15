class Solution {
public:
    long long minimumSteps(string s) {
        long long int i = 0,ind = 0,c = 0, sum = 0;
        while(i<s.length()){
            if(s[i]=='0' && ind==c){
                i++;
                ind++;
                c++;
            }
            else if(s[i]=='0'){
                sum+=(ind-c);
                ind++;
                c++;
                i++;
            }
            else{
                i++;
                ind++;
            }
        }
        return sum;
    }
};