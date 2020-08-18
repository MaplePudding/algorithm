class Solution {
    std::map<int, vector<char>> phone = {
        { {'2', {'a', 'b', 'c'}}
        , {'3', {'d', 'e', 'f'}}
        , {'4', {'g', 'h', 'i'}}
        , {'5', {'j', 'k', 'l'}}
        , {'6', {'m', 'n', 'o'}}
        , {'7', {'p', 'q', 'r', 's'}}
        , {'8', {'t', 'u', 'v'}}
        , {'9', {'w', 'x', 'y', 'z'}}
        }
    };
    void dfs(vector<char> &path, vector<string> &paths, string &digits) {
        if (path.size() == digits.size()) {
            string p = "";
            for (auto c : path) {
                p += c;
            }
            paths.push_back(p);
            return;
        }
        char next = digits[path.size()];
        for (char c : phone[next]) {
            path.push_back(c);
            dfs(path, paths, digits);
            path.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.size() == 0) return result;
        vector<char> path;
        dfs(path, result, digits);
        return result;
    }
};