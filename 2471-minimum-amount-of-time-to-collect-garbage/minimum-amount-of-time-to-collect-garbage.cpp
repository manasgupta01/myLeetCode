class Solution {
public:
    int garbageCollection(vector<string>& g, vector<int>& t) {
        int t1=0;int sum=0;
        for(int i=0;i<3;i++){
            bool z=true;
            if(i==0){
                for(int j=g.size()-1;j>=0;j--){
                    char c='M';
                    if(count(g[j].begin(), g[j].end(), c)==0 && z==true){
                        continue;
                    }
                    z=false;
                    int n=count(g[j].begin(), g[j].end(), c);
                    if(j!=0){
                        sum+=n+t[j-1];
                    }
                    else{
                        sum+=n;
                    }
                }
            }
             z=true;
            if(i==1){
                for(int j=g.size()-1;j>=0;j--){
                    char c='P';
                    if(count(g[j].begin(), g[j].end(), c)==0 && z==true){
                        continue;
                    }
                    z=false;
                    int n=count(g[j].begin(), g[j].end(), c);
                    if(j!=0){
                        sum+=n+t[j-1];
                    }
                    else{
                        sum+=n;
                    }
                }
            }
             z=true;
            if(i==2){
                for(int j=g.size()-1;j>=0;j--){
                    char c='G';
                    if(count(g[j].begin(), g[j].end(), c)==0&&z==true){
                        continue;
                    }
                    z=false;
                    int n=count(g[j].begin(), g[j].end(), c);
                    if(j!=0){
                        sum+=n+t[j-1];
                    }
                    else{
                        sum+=n;
                    }
                }
            }
        }
        return sum;
    }
};