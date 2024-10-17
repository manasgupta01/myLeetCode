class Solution {
public:
    int maximumSwap(int num) {
        int t = num;
        string s = to_string(t);
        bool b = false;
        string mx = s;
        for(int i=0;i<s.length()-1;i++){
            int j=i+1;
            while(j<s.length()){
                if(s[i]<s[j]){
                    swap(s[i],s[j]);
                    mx=max(mx,s);
                    swap(s[i],s[j]);
                    b = true;
                }
                j++;
            }
            if(b) return stoi(mx);
        }
        return stoi(mx);
    }
};