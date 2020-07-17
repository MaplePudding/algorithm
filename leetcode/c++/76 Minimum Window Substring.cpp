class Solution {
public:
    string minWindow(string s, string t) {
        if(s == "" || t == ""){
            return "";
        }
        string res = "";
        unordered_map<char, int> mp;
        int count = 0;
        int left = 0;
        int len = INT_MAX;
        for(int i = 0; i < t.length(); ++i){
            ++mp[t[i]];
        }
        
        for(int i = 0; i < s.length(); ++i){
            if(--mp[s[i]] >= 0){
                ++count;
            }
            
            while(count == t.size()){
                if(len > i - left + 1){
                    len = i - left + 1;
                    res = s.substr(left, len);
                }
                
                if(++mp[s[left]] > 0){
                    --count;
                }
                ++left;
            }
        }
        return res;
        
    }
};