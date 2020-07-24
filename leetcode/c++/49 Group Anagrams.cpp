class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<string> temp;
        unordered_map<string,vector<string>> mp;
        string str;
            
        for(string& s : strs){
            str = s;
            sort(str.begin(), str.end());
            mp[str].push_back(s);
        }
        
        for(auto i : mp){
            res.push_back(i.second);
        }
        
        return res;
    }
};