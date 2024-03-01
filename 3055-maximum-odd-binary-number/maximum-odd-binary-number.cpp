class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = count(s.begin(), s.end(), '1');
        int sz = s.size();
   
        string res = "";

        int nonOnes = sz - ones;
        ones--;

        
        while(ones-->0){
            res += "1";
        }
        while(nonOnes-->0){
            res += "0";
        }
        res+="1";
      //  reverse(res.begin(), res.end());
        return res;
    }
};