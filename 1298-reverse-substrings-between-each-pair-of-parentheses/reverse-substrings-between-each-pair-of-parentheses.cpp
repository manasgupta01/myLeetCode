class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> stk;
        string currentString = "";
        
        for (char ch : s) {
            if (ch == '(') {
                stk.push(currentString);
                currentString = "";
            } else if (ch == ')') {
                reverse(currentString.begin(), currentString.end());
                if (!stk.empty()) {
                    currentString = stk.top() + currentString;
                    stk.pop();
                }
            } else {
                currentString += ch;
            }
        }
        
        return currentString;
    }
};