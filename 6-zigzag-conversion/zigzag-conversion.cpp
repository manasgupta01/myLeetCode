class Solution {
public:
    string convert(string s, int num) {
        // char arr[num][s.length()];
     vector<vector<char>> arr(num, vector<char>(s.length(), ' '));
        if(num<=1){
            return s;
        }
        int row = 0;
        int col = 0;
        bool down = true, up = false;
        for(int i=0;i<s.length();i++){
            if(row==num-1 && down==true){
                arr[row][col]=s[i];
                if(row>0){row--;}
                col++;
                up = true;
                down = false;
            }
            else if(row==0 && up==true){
                arr[row][col]=s[i];
                row++;
                up=false;
                down=true;
            }
            else if(down==true){
                arr[row][col]=s[i];
                row++;
            }
            else if(up==true){
                arr[row][col]=s[i];
                row--;
                col++;
            }
        }
        int n = s.length();
        s = "";
        cout<<col;
        for(int i=0;i<num;i++){
            for(int j=0;j<=col;j++){
                
               if(arr[i][j]!=' '){
                s+=arr[i][j];
               }
            }
            cout<<"\n";
        }
    return s;  
    }
};