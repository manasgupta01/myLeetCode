/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>a1;
        vector<int>b1;
        int a[m][n]; 
        for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
            a[i][j]=-1;
           }
          
       }
        int b=n;
        int bb=m;
        int c=1;
         int k=1,i=1,j=1;
        bool t=false;
       
       while(head!=NULL){
           a[i-1][j-1]=head->val;
           head=head->next;
           cout<<i<<j<<" ";
           if(t==false){
               if(j<b){
                   j++;
               }
               else{
                    if(i<bb){ 
                        i++;
                    }
                    else{
                        t=true;
                        j--;
                        b--;
                        bb--;
                    }
               }
           }
           else{
               if(j>c){
                  
                   j--;
               }
               else{
                   if(i>c+1){
                       i--;
                   }
                   else{
                       t=false;
                       c++;
                       j++;
                      
                   }
               }
           }
       }
       for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               b1.push_back(a[i][j]);
           }
           a1.push_back(b1);
           b1.clear();
       }
       return a1;
    }
};