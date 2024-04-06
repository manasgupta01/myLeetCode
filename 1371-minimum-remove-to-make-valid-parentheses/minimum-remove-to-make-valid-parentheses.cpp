#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<char> stack;
        vector<int> indicesToRemove;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                stack.push_back(s[i]);
                indicesToRemove.push_back(i); // Store indices of opening parentheses
            } else if (s[i] == ')') {
                if (!stack.empty() && stack.back() == '(') {
                    stack.pop_back();
                    indicesToRemove.pop_back(); // Remove corresponding opening parenthesis index
                } else {
                    indicesToRemove.push_back(i); // Store indices of closing parentheses that don't have a corresponding opening parenthesis
                }
            }
        }

        string res = "";
        int removeIndex = 0; // Pointer to the next index to remove from indicesToRemove

        for (int i = 0; i < s.length(); i++) {
            if (removeIndex < indicesToRemove.size() && i == indicesToRemove[removeIndex]) {
                removeIndex++;
            } else {
                res += s[i];
            }
        }

        return res;
    }
};
