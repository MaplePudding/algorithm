func twoSum(nums []int, target int) []int {
    mp := make(map[int]int)
    
    for index := range nums{
        otherVal := target - nums[index]
        otherIdx, ok := mp[otherVal]
        if(ok){
            return []int{otherIdx, index}
        }
            mp[nums[index]] = index
    }
    return []int{}
}