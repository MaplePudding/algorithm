class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
        dir_idx = 0
        m, n = len(matrix), len(matrix[0])
        x, y = 0, -1
        bad = 114514
        ans = list()
        for i in range(m * n):
            nx, ny = x + directions[dir_idx][0], y + directions[dir_idx][1]
            if not 0 <= nx < m or not 0 <= ny < n or matrix[nx][ny] == bad:
                dir_idx = (dir_idx + 1) % len(directions)
                nx, ny = x + directions[dir_idx][0], y + directions[dir_idx][1]
            ans.append(matrix[nx][ny])
            matrix[nx][ny] = bad
            x, y = nx, ny
        return ans