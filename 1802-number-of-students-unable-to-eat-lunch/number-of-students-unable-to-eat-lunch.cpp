class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& s) {
        int zero=0,one=0;
        for(int i=0;i<st.size();i++){
            if(st[i]==0){
                zero++;
            }
            else{
                one++;
            }
        }
        for(int i=0;i<s.size();i++){
           if(s[i]==0){
            if(zero>0){
                zero--;
            }
            else{
                break;
            }
           }
           else{
            if(one>0){
                one--;
            }
            else{break;}
           }
        }
        return zero+one;
    }
};