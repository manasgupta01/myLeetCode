class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i;
        vector<char>s1,t1;
        for(i=0;i<s.length();i++){
            if(s[i]!='#'){
                s1.push_back(s[i]);
            }
            else{
                if(!s1.empty())
                s1.pop_back();
            }
             
        }
        for(i=0;i<t.length();i++){
            if(t[i]!='#'){
                t1.push_back(t[i]);
            }
            else{
                if(!t1.empty())
                t1.pop_back();
            }
             
        }
        if(s1==t1){
           
            return true;
        }
        return false;

        
    }
};