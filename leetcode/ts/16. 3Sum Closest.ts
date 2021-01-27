function threeSumClosest(nums: number[], target: number): number {
    nums.sort((a , b) => a - b)
    let arr = []
    let res = Infinity
     for( let i = 0; i < nums.length; i++){
         let l = i + 1
         let r = nums.length - 1
         while(l < r){
             let sum = nums[i] + nums[l] + nums[r]
             // sum>=target?(arr[sum-target] = sum,r--):(arr[target - sum]=sum, l++)
             if(Math.abs(target - sum) < Math.abs(res - target)) res = sum
             if(target > sum) l++
             else r--
         }
     }
    return res
};