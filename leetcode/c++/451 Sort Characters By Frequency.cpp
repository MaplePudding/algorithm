class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        map<char, int>::iterator i;
        priority_queue<pair<int, char>> que;
        string res = "";
        
        for(int i = 0; i < s.length(); ++i){
            ++mp[s[i]];
        }
        
        for(i = mp.begin(); i != mp.end(); ++i){
            que.push({i -> second, i -> first});
        }
        
        while(!que.empty()){
            pair<int, char> temp = que.top();
            que.pop();
            for(int i = 0; i < temp.first; ++i){
                res += temp.second;
            }
        }
        return res;
    }
};