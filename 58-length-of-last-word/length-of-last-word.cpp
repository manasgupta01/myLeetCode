class Solution {
public:
    int lengthOfLastWord(string s) {
        bool k = false;
        int cnt=0;
        for(int i=s.length()-1;i>=0;i--){
            char c = s[i];
            cout<<c;
            if(!(c==' ')){
                cout<<"hi";
                cnt++;
                k=true;
            }
            if(k && c==' '){
                break;
            }
        }
        return cnt;
    }
};