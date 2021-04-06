class Solution(object):
    def searchMatrix(self, matrix, target):
        M, N = len(matrix), len(matrix[0])
        for i in range(M):
            if target > matrix[i][N - 1]:
                continue
            if target in matrix[i]:
                return True
        return False