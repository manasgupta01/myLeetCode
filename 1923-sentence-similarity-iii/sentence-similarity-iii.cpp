class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        vector<string>v1,v2;
        string temp = "";
        for(int i=0;i<s1.length();i++){
            temp+=s1[i];
            if(s1[i]==' '){
                temp.pop_back();
                v1.push_back(temp);
                temp="";
            }else if(i==s1.length()-1){
                v1.push_back(temp);
            }
        }
        temp="";
         for(int i=0;i<s2.length();i++){
            temp+=s2[i];
            if(s2[i]==' '){
                temp.pop_back();
                v2.push_back(temp);
                temp="";
            }else if(i==s2.length()-1){
                v2.push_back(temp);
            }
        }
        if(v1.size()<v2.size()){
            swap(v1,v2);
        }
        int l1 = 0 , l2 = 0;
        while(l1<=v1.size()-1){
            if(v2.size()==0)return true;
            if(v1[l1]==v2[l2]){
                v2.erase(v2.begin()); 
                l1++;
            }
            else{
                break;
            }
        } 
        if(v2.size()==0)return true;
        int r1 = v1.size()-1, r2 = v2.size()-1;
        while(r2>=0 ){
            if(v2.size()==0)return true;
            if(v1[r1]==v2[r2]){
                r2--;
                r1--;
                v2.pop_back();
            }
            else{
                break;
            }
        }
        if(v2.size()==0)return true;
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
        return false;
    }
};