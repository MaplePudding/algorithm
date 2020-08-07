class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int res = 0;
        if(s.size() == 1){
            return 1;
        }
        for(int i = 0; i < s.size(); ++i){
            for(int j = i; j < s.size(); ++j){
                if(mp[s[j]] != 0){
                    res = max(res, j - i);
                    mp.clear();
                    break;
                }else if(j == s.size() - 1){
                     res = max(res, j - i + 1);
                    mp.clear();
                    break;
                }
                else{
                    ++mp[s[j]];
                }
            }
        }
        return res;
    }
};