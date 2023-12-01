class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a,b;
        int i=0;
        while(i<word1.size() || i<word2.size()){
            if(i<word1.size()){
                a+=word1[i];
            }
             if(i<word2.size()){
                b+=word2[i];
            }
            i++;
        }
          return ((a==b)?true:false);
    }
};