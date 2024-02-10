class Solution {
public:

    bool ispal(string k){
        for(int i=0;i<k.length()/2;i++){
            if(k[i]!=k[k.length()-1-i]){
                return false;
            }
        }
        return true;
    }
    int countSubstrings(string s) {
        vector<string>t;
    string k="";
    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
            k+=s[j];
            //if(t.count(k)<1)
            if(ispal(k)){
                t.push_back(k);  
            }
               
            
        }
        k="";
    }
        return t.size();
    }
};