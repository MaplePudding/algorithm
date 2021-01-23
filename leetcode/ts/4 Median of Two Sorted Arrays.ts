function findKth(nums1 : number[], i : number, nums2 : number[], j : number, target : number) : number{
    if(i >= nums1.length){
        return nums2[j + target - 1]
    }
    if(j >= nums2.length){
        return nums1[i + target - 1]
    }
    if(target == 1){
        return Math.min(nums1[i], nums2[j])
    }
    let midVal1 = (i + Math.floor(target / 2) - 1 < nums1.length) ? nums1[i + Math.floor(target / 2) - 1] : Number.MAX_VALUE
    let midVal2 = (j + Math.floor(target / 2) - 1 < nums2.length) ? nums2[j + Math.floor(target / 2) - 1] : Number.MAX_VALUE
    
    if(midVal1 < midVal2){
        return findKth(nums1, i + Math.floor(target / 2), nums2, j, target - Math.floor(target / 2))
    }else{
        return findKth(nums1, i, nums2, j + Math.floor(target / 2), target - Math.floor(target / 2))
    }
}

function findMedianSortedArrays(nums1: number[], nums2: number[]): number {
    const len1 = nums1.length
    const len2 = nums2.length
    let k1 = Math.floor((len1 + len2 + 1) / 2)
    let k2 = Math.floor((len1 + len2 + 2) / 2)
    
    return (findKth(nums1, 0, nums2, 0, k1) + findKth(nums1, 0, nums2, 0, k2)) / 2
};