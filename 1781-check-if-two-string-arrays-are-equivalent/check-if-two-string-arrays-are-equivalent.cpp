class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a,b;
        int i=0,j=0;
        while(i<word1.size() || j<word2.size()){
            if(i<word1.size()){
                a+=word1[i];
            }
             if(j<word2.size()){
                b+=word2[j];
            }
            i++;
            j++;
          
        }
        cout<<a<<b;
          return ((a==b)?true:false);
    }
};