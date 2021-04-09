class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        res = []
        queens = []
        for i in range(n):
            queens.append("." * n)
        self.helper(0, queens, res)
        return res
    def helper(self, curRow, queens, res):
        n = len(queens)
        if curRow == n:
            res.append(queens[:])
            return
        for i in range(n):
            if self.isValid(queens, curRow, i):
                queens[curRow] = queens[curRow][0 : i] + 'Q' + queens[curRow][i + 1 : len(queens)]  
                self.helper(curRow + 1, queens, res)
                queens[curRow] = queens[curRow][0 : i] + '.' + queens[curRow][i + 1 : len(queens)]
    
    def isValid(self, queens, curRow, col):
        for i in range(curRow):
            if queens[i][col] == 'Q':
                return False
        for i, j in zip(range(curRow - 1, -1, -1), range(col + 1, len(queens))):
            if queens[i][j] == 'Q':
                return False
        for i, j in zip(range(curRow - 1, -1, -1), range(col - 1, -1, -1)):
            if queens[i][j] == 'Q':
                return False
        return True