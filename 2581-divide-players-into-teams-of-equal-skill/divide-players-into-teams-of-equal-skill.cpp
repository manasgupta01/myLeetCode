class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int l = 0, r = skill.size()-1;
        long long int sum,psum=skill[l]+skill[r],tsum=0;
        while(l<r){
            sum=skill[l]+skill[r];
            
            if(psum!=sum){
                return -1;
            }
            tsum+=skill[l]*skill[r];
            psum=sum;
            l++;
            r--;
        }
        return tsum;
    }
};