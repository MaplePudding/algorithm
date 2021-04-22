class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        res = []
        def backtrace(i,tmp):
            if len(tmp) == k:
                res.append(tmp)
                return
            for j in range(i,n+1):
                backtrace(j+1,tmp+[j])
        backtrace(1,[])
        return res