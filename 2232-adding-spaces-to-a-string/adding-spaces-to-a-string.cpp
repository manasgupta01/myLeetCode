class Solution {
public:
    string addSpaces(string s, vector<int>& sp) {
        vector<char>s1;
        int t=0;
        int n=sp[t];
        for(int i=0;i<s.length();i++){
            
            if(t<sp.size()) n=sp[t];
            if(i==n){
                t++;
                s1.push_back(' ');
                s1.push_back(s[i]);
            }
            else{
                 s1.push_back(s[i]);
            }
        }
        s="";
        for(int i=0;i<s1.size();i++){
            s+=s1[i];
        }
        return s;
    }
};