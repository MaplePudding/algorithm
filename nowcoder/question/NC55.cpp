class Solution {
public:
    /**
     *
     * @param strs string×Ö·û´®vector
     * @return string×Ö·û´®
     */
    string longestCommonPrefix(vector<string>& strs) {
        // write code here
        if (strs.empty()) return "";
        sort(strs.begin(), strs.end());
        string a = strs[0], b = strs[strs.size() - 1];
        int  i = 0;
        for (i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) break;
        }
        if (i == a.size()) return a;
        else return a.substr(0, i);
    }
};