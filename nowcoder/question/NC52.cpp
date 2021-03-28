class Solution {
public:
    /**
     *
     * @param s string×Ö·û´®
     * @return bool²¼¶ûÐÍ
     */
    bool isValid(string s) {
        // write code here
        stack<char> st;
        if (s.length() % 2 == 1) {
            return false;
        }
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            }
            else {
                if (st.empty()) {
                    return false;
                }
                if (st.top() == '(' && s[i] == ')') {
                    st.pop();
                }
                else if (st.top() == '[' && s[i] == ']') {
                    st.pop();
                }
                else if (st.top() == '{' && s[i] == '}') {
                    st.pop();
                }
            }
        }
        if (st.empty()) {
            return true;
        }
        return false;
    }
};