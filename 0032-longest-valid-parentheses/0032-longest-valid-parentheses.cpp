class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        stk.push(-1);
        int maxLength = 0;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            //cout << i << "\n";
            if (c == '(') {
                stk.push(i);
            } else {
                stk.pop();
                if (stk.size()) {
                    maxLength = max(maxLength, i - stk.top());
                } else {
                    stk.push(i);
                }
            }
        }
        return maxLength;
    }
};