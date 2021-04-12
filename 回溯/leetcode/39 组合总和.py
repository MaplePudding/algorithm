class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        result = []
        path = []
        def back_track(candidates, target, index):
            if sum(path) == target:
                result.append(path[:])
                return 
            if sum(path) > target:
                return
            for i in range(index, len(candidates)):
                path.append(candidates[i])
                back_track(candidates, target, i)
                path.pop()
        back_track(candidates, target, 0)
        return result