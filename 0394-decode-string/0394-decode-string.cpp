
class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        int i = s.length() - 1;

        while (i >= 0) {
            if (s[i] == ']' || isalpha(s[i])) {
                st.push(string(1, s[i]));
            } else if (s[i] == '[') {
                string sub = "";
                while (st.top() != "]") {
                    sub += st.top();
                    st.pop();
                }
                st.pop();
                st.push(sub);
            } else if (isdigit(s[i])) {
                string n = "";
                while (i > 0 && isdigit(s[i - 1])) {
                    n += s[i--];
                }
                n += s[i];

                string subst2 = st.top();
                st.pop();
                reverse(n.begin(), n.end());
                int num = stoi(n);
                string repeated = "";
                for (int j = 0; j < num; j++) {
                    repeated += subst2;
                }
                st.push(repeated);
            }
            i--;
        }

        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        //reverse(ans.begin(), ans.end());
        return ans;
    }
};