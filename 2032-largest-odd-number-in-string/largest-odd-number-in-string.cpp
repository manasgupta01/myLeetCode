class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.length()-1;i>=0;i--){
          if(num[i]=='9'||num[i]=='7'||num[i]=='5'||num[i]=='3'||num[i]=='1'){
            return num.substr(0, i+1);
          }
        }
        return "";

    }
};