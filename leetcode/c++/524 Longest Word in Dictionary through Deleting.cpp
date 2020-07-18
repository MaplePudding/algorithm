class Solution {
public:
    static bool compare(string a, string b){
        if(a.length() > b.length()){
            return true;
        }else if(a.length() == b.length()){
            return a < b;
        }else{
            return false;
        }
    };
    
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(), d.end(), compare);
        int a = 0;
        for(int i = 0; i < d.size(); ++i){
            for(a = 0; a < d[i].length();){
                for(int b = 0; b < s.length(); ++b){
                    if(s[b] == d[i][a]){
                        ++a;
                    }
                }
                break;
            }
            if(a == d[i].length()){
                return d[i];
            }
        }
        return "";
    }
};