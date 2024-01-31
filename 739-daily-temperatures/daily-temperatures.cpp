class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> res(t.size(),0);
        stack<int>s;
        for(int i = t.size()-1;i>=0;--i){
            int temp = t[i];
            while(!s.empty() && temp>=t[s.top()]){
                s.pop();
            }
            if(!s.empty()){
                res[i]=s.top()-i;
            }  
            s.push(i);
        }
        return res;
    }
};



       
