class Solution:
    def maxProduct(self , arr ):
        maxi, mini, maxproduct = 1, 1, arr[0]
        for i in range(len(arr)):
            maxi, mini = max(maxi*arr[i], mini*arr[i], arr[i]), min(maxi*arr[i], mini*arr[i], arr[i])
            maxproduct = max(maxi, maxproduct)
        return maxproduct