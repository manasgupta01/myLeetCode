class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int>a;
        queue<int>b;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                a.push(nums[i]);
            }
            else {
                b.push(nums[i]);
            }
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans.push_back(a.front());
                a.pop();
            }
            else{
                ans.push_back(b.front());
                b.pop();
            }
        }
        return ans;
    }
};