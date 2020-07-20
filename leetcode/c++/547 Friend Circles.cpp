class Solution {
public:
    void clearFunc(vector<vector<int>>& M, int a, int b){
        M[a][b] = 0;
        M[b][a] = 0;
        for(int x = 0; x < M.size(); ++x){
            if(M[a][x] == 1){
                clearFunc(M, a, x);
                clearFunc(M, x, a);
            }
        }
    };
    
    int findCircleNum(vector<vector<int>>& M) {
        int res = 0;
        
        for(int a = 0; a < M.size(); ++a){
            for(int b = 0; b < M.size(); ++b){
                if(M[a][b] == 1){
                    ++res;
                    clearFunc(M, a, b);
                }
            }
        }
        return res;
    }
};