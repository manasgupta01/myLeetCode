#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

class Solution {
public:
    int numTeams(vector<int>& rating) 
    {
        int ans = 0;
        pbds<int>left, right(begin(rating), end(rating));
        for(auto val:rating)
        {
            int leftSmall = left.order_of_key(val);
            int leftLarger = left.size() - leftSmall;
            left.insert(val);

            right.erase(val);
            int rightSmall = right.order_of_key(val);
            int rightLarger = right.size() - rightSmall;

            ans += (leftSmall * rightLarger) + (rightSmall * leftLarger);
        }
        return ans;
    }
};