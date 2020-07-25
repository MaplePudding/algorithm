class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int a = 1; a < triangle.size(); ++a){
            for(int b = 0; b < triangle[a].size(); ++b){
                if(b == 0){
                    triangle[a][b] += triangle[a - 1][b];  
                }else if(b == triangle[a].size() - 1){
                    triangle[a][b] += triangle[a - 1][b - 1];
                }else{
                    triangle[a][b] += min(triangle[a - 1][b], triangle[a - 1][b - 1]);
                }
            }
        }
        return *min_element(triangle.back().begin(), triangle.back().end());
    }
};