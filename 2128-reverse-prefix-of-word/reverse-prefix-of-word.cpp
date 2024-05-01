class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s = "";
        bool b = false;
        for(int i=0;i<word.length();i++){
              s+=word[i];
            if(word[i]==ch && b==false){
                reverse(s.begin(), s.end());
                b=true;
            }
        }
        return s;
    }
};