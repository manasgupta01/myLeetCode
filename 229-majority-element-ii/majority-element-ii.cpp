class Solution {
public:
    vector<int> majorityElement(vector<int>& n) {
        vector<int >k;
        int c1=0,c2=0,n1=INT_MAX,n2=INT_MAX;
        for(int i=0;i< n.size();i++){
            if(c1==0 && n[i] != n2){
                n1=n[i];
            }
            if(c2==0 && n1 != n[i]){
                n2=n[i];
            }
            // c1+=(n[i]==n1 && (n1!=n2 && n1!=n3))?1:-1;
            // c2+=(n[i]==n2 && (n1!=n2 && n2!=n3))?1:-1;
            // c3+=(n[i]==n3 && (n1!=n3 && n2!=n3))?1:-1;
            if(n1 == n[i]){
                c1++;
            }else if(n2 == n[i])
                c2++;
            else
                c1-- ,  c2--;
        }

        c1 =0 , c2 = 0;
        for(auto itr : n){
            if(itr == n1)
                c1++;
            if(itr == n2)
                c2++;
        }
        if(c1 > n.size()/3) k.push_back(n1);
        if(c2 > n.size()/3) k.push_back(n2);

        
        // cout<<c1<<c2<<c3;
        // if(c1==c2 && c2==c3){
        //     return {};
        // }
        // if(c1>n.size()/3){
        //     k.push_back(n1);
        // }
        // if(c2>n.size()/3){
        //     k.push_back(n2);
        // }
        // if(c3>n.size()/3){
        //     k.push_back(n3);
        // }

        return k;


    }
};