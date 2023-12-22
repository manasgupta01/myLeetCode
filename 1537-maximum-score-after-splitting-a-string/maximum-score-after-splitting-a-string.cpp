class Solution {
public:
    int maxScore(string s) {
        int res = 0,k;
        char a='0',b='1';
        for(int i=1;i<s.length();i++){
            string l=s.substr(0,i);
            string r=s.substr(i,s.length());
           // cout<<s<<s.length()-1<<endl<<r<<endl;
           cout<<l<<" "<<r<<endl;
            int c1  = count(l.begin(),l.end(),a);
            int c2  = count(r.begin(),r.end(),b);
            k = c1+c2;
            res=max(res,k);
        }
        return res;
    }
};