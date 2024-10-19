class Solution {
public:
    vector<string> v ;
    string rev(string str){
        for(int i=0;i<str.length();i++){
            if(str[i]=='0'){
                str[i]='1';
            }
            else{
                str[i]='0';
            }
        }
        reverse(str.begin(), str.end());
        cout<<str<<endl;
        return str;
    }
    string rec(int n1, vector<string> &vec){
        if(vec[n1]!=""){
            return vec[n1];
        }
        vec[n1] =  rec(n1-1,vec) + "1"+rev(vec[n1-1]) ;
        return vec[n1];
    }
    char findKthBit(int n, int k) {
        v.resize(n, "");
        v[0]="0";
        v[n-1] = rec(n-1,v);
        string res = v[n-1];
        return res[k-1];
    }
};