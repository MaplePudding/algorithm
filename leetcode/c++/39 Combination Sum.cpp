class Solution {
public:
    void search(vector<vector<int>>& res, vector<int> temp, vector<int>& candidates, int index, int num){
        if(num == 0){
            res.push_back(temp);
            return;
        }else if(num < 0){
            return;
        }else{
            for(int i = index; i < candidates.size(); ++i){
                temp.push_back(candidates[i]);
                search(res, temp, candidates, i, num - candidates[i]);
                temp.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> res;
        search(res, temp, candidates, 0, target);
        return res;
    }
};