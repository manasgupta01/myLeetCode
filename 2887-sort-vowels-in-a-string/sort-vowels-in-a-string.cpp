class Solution {
public:
    bool chk(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        vector<int> v;
        vector<char> vc;
        for(int i=0;i<s.length();i++){
            if(chk(s[i])){
                v.push_back(i);
                vc.push_back(s[i]);
            }
        }
        sort(vc.begin(),vc.end());
        int t = 0;
        int si = 0;
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        string res = "";
        for(int i=0;i<s.length();i++){
            if(t<v.size() && v[t]==i){
                res+=vc[t];
                t++;
            }
            else{res+=s[i];}

        }
        return res;
    }
};