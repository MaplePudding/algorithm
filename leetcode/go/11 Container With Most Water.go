func maxArea(height []int) int {
    res, i, j := 0, 0, len(height) - 1
    for;i < j;{
        res = max(res, min(height[i], height[j])*(j - i))
        
        if(height[i] < height[j]){
            i++
        }else{
            j--
        }
    }
    return res
}

func max(val1 int, val2 int) int {
    if(val1 > val2){
        return val1
    }else{
        return val2
    }
}

func min(val1 int, val2 int) int {
    if(val1 < val2){
        return val1
    }else{
        return val2
    }
}