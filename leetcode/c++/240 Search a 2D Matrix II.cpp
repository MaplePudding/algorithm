class Solution {
public:
    bool search(vector<vector<int>>& matrix, int i, int left, int right, int target){
        int mid = (left + right) / 2;
        if(target == matrix[i][mid]){
            return true;
        }
        if(right - left == 1 && matrix[i][left] != target && matrix[i][right] != target){
            return false;
        }
        if(right - left == 1 && (matrix[i][left] == target || matrix[i][right] == target)){
            return true;
        }
        
        if(target < matrix[i][mid]){
            return search(matrix, i, left, mid, target);
        }
        if(target > matrix[i][mid]){
            return search(matrix, i, mid, right, target);
        }
        
        return true;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i;
        int left = 0;
        if(matrix.size() == 0){
            return false;
        }
        if(matrix[0].size() == 0){
            return false;
        }
        int right = matrix[0].size() - 1;
        if(target < matrix[0][0]){
            return false;
        }
        for(i = 0; i < matrix.size(); ++i){
            if(target >= matrix[i][0] && target <= matrix[i].back()){
                if(search(matrix, i, 0, matrix[0].size() - 1, target)){
                    return true;
                }
            }
        }
        return false;
    }
};