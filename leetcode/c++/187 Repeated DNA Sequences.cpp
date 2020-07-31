class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mp;
        unordered_map<string,int>::iterator i;
        vector<string> res;
        if(s.length() < 10){
            return res;
        }else{
            for(int i = 0; i <= s.length() - 10; ++i){
                mp[s.substr(i, 10)]++;
            }
            for(i = mp.begin(); i != mp.end(); ++i){
                if(i -> second > 1){
                    res.push_back(i -> first);
                }
            }
            return res;
        }
    }
};