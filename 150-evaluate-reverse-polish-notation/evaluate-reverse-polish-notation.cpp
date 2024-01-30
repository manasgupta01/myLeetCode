class Solution {
public:
    int evalRPN(vector<string>& t) {
        vector<int>a;
        int s=0;
        for(int i=0;i<t.size();i++){
            if(t[i] == "+" ||t[i] == "-" ||t[i] == "/" ||t[i] == "*"){
                int n1=a.back();
                a.pop_back();
                int n2=a.back();
                a.pop_back();
                if(t[i] == "+"){
                    a.push_back(n2+n1);
                }
                else if(t[i] == "-"){
                    a.push_back(n2-n1);
                }
                else if(t[i] == "/"){
                    a.push_back(n2/n1);
                }
                else if(t[i] == "*"){
                    a.push_back(n2*n1);
                }
            }
            else{
                int temp = stoi(t[i]);
                a.push_back(temp);
                cout<<temp;
            }
        }
        return a.back();

    }
};