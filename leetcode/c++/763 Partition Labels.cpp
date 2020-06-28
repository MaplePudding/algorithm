class Solution {
public:
    vector<int> partitionLabels(string S) {
        int temp  = 0;
        vector<int> res;
        int index = 0;
        for(int i = 0; i < S.size(); ++i){
            ++index;
            int pos = S.rfind(S[i], S.length());
            if(pos > temp){
                temp = pos;
            }
            if(i == temp){
                res.push_back(index);
                index = 0;
            }
        }
        return res;
    }
};