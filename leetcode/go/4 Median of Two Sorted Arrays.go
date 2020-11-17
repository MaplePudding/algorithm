func findKth(nums1 []int, nums2 []int, i int, j int, k int) float64 {
    if(i >= len(nums1)){
        return float64(nums2[j + k - 1])
    }
    if(j >= len(nums2)){
        return float64(nums1[i + k - 1])
    }
    
    if(k == 1){
        if(nums1[i] < nums2[j]){
            return float64(nums1[i])
        }else{
            return float64(nums2[j])
        }
    }
    
    midVal1 := 9223372036854775807
    midVal2 := 9223372036854775807
    
    if(i + k / 2 - 1 < len(nums1)){
        midVal1 = nums1[i + k / 2 - 1]
    }
    
    if(j + k / 2 - 1 < len(nums2)){
        midVal2 = nums2[j + k / 2 - 1]
    }
    
    if(midVal1 < midVal2){
        return findKth(nums1, nums2, i + k / 2, j, k - k / 2)
    }else{
        return findKth(nums1, nums2, i, j + k / 2, k - k / 2)
    }
}

func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
    l1 := len(nums1)
    l2 := len(nums2)
    
    left := (l1 + l2 + 1) / 2
    right := (l1 + l2 + 2) / 2
    
    return (findKth(nums1, nums2, 0, 0, left) + findKth(nums1, nums2, 0, 0, right)) / 2
}