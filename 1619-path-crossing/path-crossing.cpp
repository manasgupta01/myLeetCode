class Solution {
public:
 set<pair<int,int>>hset;
    bool ch(int a,int b){
        pair<int, int> checkPair = make_pair(a,b);
            if (hset.count(checkPair) > 0) {
                return true;
            } 
        return false;
    }
    bool isPathCrossing(string p) {
        int x=0,y=0;
        hset.insert(make_pair(x,y));
      //  set<pair<int,int>>hset;
        for(int i=0;i<p.length();i++){
            if(p[i]=='N'){
               
                if(ch(x,y+1)==true){
                    return true;
                } hset.insert(make_pair(x,y+1));
                y++;
                
            }
            else if(p[i]=='S'){
                
                if(ch(x,y-1)==true){
                    return true;
                }hset.insert(make_pair(x,y-1));
                y--;
            }
            else if(p[i]=='E'){
              
                if(ch(x+1,y)==true){
                    return true;
                }  hset.insert(make_pair(x+1,y));
                x++;
            }
            else if(p[i]=='W'){
                
                if(ch(x-1,y)==true){
                    return true;
                }
                hset.insert(make_pair(x-1,y));
                x--;
            }
        }
        
        return false;
    }
};