func helper(nums *[]int, res *[][]int){
    for k, v := range(*nums){
        if(v > 0){
            return
        }
        
        if(k > len(*nums) - 3){
            return
        }
        
        if(k > 0 && (*nums)[k] == (*nums)[k - 1]){
            continue
        }
        
        left := k + 1
        right := len(*nums) - 1
        
        for;left < right;{
            if(v + (*nums)[left] + (*nums)[right] > 0){
                right--
            }else if(v + (*nums)[left] + (*nums)[right] < 0){
                left++
            }else{
                *res = append(*res, []int{v, (*nums)[left], (*nums)[right]})
                left++
                right--
                
                for;left < right;{
                    if(left != 0 && (*nums)[left] == (*nums)[left - 1]){
                        left++
                    }else{
                        break
                    }
                }
            
                for;left < right;{
                    if(right != len(*nums) - 1 && (*nums)[right] == (*nums)[right + 1]){
                        right--
                    }else{
                        break
                    }
                }
            }
            
        }
    }
    return
}

func threeSum(nums []int) [][]int {
    res := [][]int{}
    sort.Ints(nums)
    
    if(len(nums) < 3){
        return res
    }
    
    if(nums[0] > 0){
        return res
    }
    
    helper(&nums, &res)
    
    return res
}