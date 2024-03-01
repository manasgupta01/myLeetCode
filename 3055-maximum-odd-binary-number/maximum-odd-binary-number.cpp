class Solution {
public:
    string maximumOddBinaryNumber(string s) {
     int last = s.length()-1;
     bool b = false;
    
     if(s[last]=='1'){
         
         b=true;
         
     }
     if(b==false){
         cout<<"hi";
        for(int i=s.length()-1;i>=0;i--){
          //  cout<<s[i]<< " " << s[last]<< " \n";
            if(s[i]=='1'){
                cout<<"c";
                swap(s[i],s[last]);
                break;
            }
        } 
     }
     {
         int l = 0;
         for(int i=1;i<s.length()-1 && l<s.length()-1;i++){
             cout<<s[i]<< " " << s[l]<< " \n";
             if(s[l]=='1'){
                 cout<<"a";
                 l++;
                 continue;
             }
             else{
                 if(s[l]=='0' && s[i]=='1'){
                     cout<<"b";
                     swap(s[i],s[l]);
                     l++;
                 }
             }
         }
     }
     return s;

    }
};