class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c = 0;
        for(int i=0;i<details.size();i++){
            string s = details[i];
            string temp = "";
            for(int i=11;i<=s.length()-3;i++){
                temp+=s[i];
            }
            int n = stoi(temp);
            cout<<n<<" ";
            if(n>60){
                c++;
            }
        }   
        return c;
    }
};