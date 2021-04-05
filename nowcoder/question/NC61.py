class Solution:
    def twoSum(self , numbers , target ):
        # write code here
        d = {}
        for i in range(len(numbers)):
            if target - numbers[i] in d:
                return [d[target - numbers[i]] + 1, i + 1]
            else:
                d[numbers[i]] = i
        return None