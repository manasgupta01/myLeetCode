class Solution {
public:
    vector<string> removeAnagrams(vector<string>& w) {
        for(int i=1;i<w.size();i++){
            string s1=w[i],s2=w[i-1];
           sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1==s2){
                w[i]=w[i-1];
                w[i-1]="";
            }

        }
        vector<string>k;
        for(int i=0;i<w.size();i++){
            if(w[i]!=""){
                k.push_back(w[i]);
            }
        }
        return k;
    }
};