class Solution {
public:
    string removeKdigits(string num, int k) {
      vector<char>stk;
      for(char c:num){
        while(k>0 && !stk.empty() && stk.back()>c){
            stk.pop_back();
            k--;
        }
        stk.push_back(c);
      }
      while(k>0){
        k--;
        stk.pop_back();
      }
      string ans = "";
      for( char c : stk){
        if(ans.empty() && c=='0'){
            continue;
        }
        ans.push_back(c);
      }
      if(ans==""){
        return "0";
      }
       return ans;
    }
   
};