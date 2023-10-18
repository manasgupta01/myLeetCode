class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int co=0;
        string a="++X",b="X++",c="--X",d="X--";
        for(int i=0;i<o.size();i++){
            if(o[i]==a || o[i]==b){
                co++;
            }
            else{
                co--;
            }
        }
        return co;
    }
};