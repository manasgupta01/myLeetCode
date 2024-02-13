class Solution {
public:
    bool cp(string s){
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[s.length()-i-1]){
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(cp(words[i])){
                return words[i];
            }
        }
        return "";
    }
};