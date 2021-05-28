class Solution:
    def findElement(self, mat, n, m, x):
        # write code here
        def findK(arr, left, right, target):
            if left > right:
                return None
            mid = (left + right) // 2
            if target == arr[mid]:
                return mid
            elif target < arr[mid]:
                return findK(arr, left, mid - 1, target)
            else:
                return findK(arr, mid + 1, right, target)
                 
        for i in range(n):
            if x <= mat[i][m - 1]:
                res = findK(mat[i], 0, m - 1, x)
                if res != None:
                    return [i, res]