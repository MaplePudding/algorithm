class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        ans = []
        temp = []
        candidates.sort()
        def trackback(index):
            if sum(temp) > target:
                return
            if sum(temp) == target:
                ans.append(temp[:])
                return
            for i in range(index, len(candidates)):
                if i > index and candidates[i] == candidates[i - 1]:
                    continue
                temp.append(candidates[i])
                trackback(i + 1)
                temp.pop()
        trackback(0)
        return ans