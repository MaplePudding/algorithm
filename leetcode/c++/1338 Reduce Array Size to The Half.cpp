class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int res = 0;
        int count = 0;
        priority_queue<pair<int,int>> q;
        map<int,int> mp;
        
        for(int i = 0; i < arr.size(); ++i){
            ++mp[arr[i]];
        }
        
        for(auto i : mp){
            q.push({i.second, i.first});
        }
        
        
        while(true){
            if(q.top().first + count >= arr.size() / 2){
                ++res;
                return res;
            }else{
                count += q.top().first;
                ++res;
                q.pop();
            }
        }
    }
};