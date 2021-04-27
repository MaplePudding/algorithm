class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        res = []
        queens = []

        for i in range(n):
            queens.append("." * n)

        def isValid(curRow, index):
            for row in range(curRow):
                if queens[row][index] == 'Q':
                    return False
            for row, col in zip(range(curRow - 1, -1, -1), range(index + 1, n)):
                if queens[row][col] == 'Q':
                    return False
            for row, col in zip(range(curRow - 1, - 1, - 1), range(index - 1, -1, -1)):
                if queens[row][col] == 'Q':
                    return False
            return True
        
        def helper(curRow):
            if curRow == n:
                res.append(queens[:])
                return
            for i in range(n):
                if isValid(curRow, i):
                    queens[curRow] = queens[curRow][0 : i] + 'Q' + queens[curRow][i + 1 : ]
                    helper(curRow + 1)
                    queens[curRow] = queens[curRow][0 : i] + '.' + queens[curRow][i + 1 : ]
        helper(0)
        return res