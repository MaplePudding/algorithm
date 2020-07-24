class Solution {
public:
    void search(string s, int left, int right, int& index, int& maxLen){
        while(left >= 0 && right < s.length() && s[left] == s[right]){
            ++right;
            --left;
        }
        if(maxLen < right - left - 1){
            index = left + 1;
            maxLen = right - left - 1;
        }
    }
    
    string longestPalindrome(string s) {
        if(s.size() <= 1){
            return s;
        }
        int index = 0;
        int maxLen = 0;
        for (int i = 0; i < s.size() - 1; ++i) {
            search(s, i, i, index, maxLen);
            search(s, i, i + 1, index, maxLen);
        }
        return s.substr(index, maxLen);
    }
};