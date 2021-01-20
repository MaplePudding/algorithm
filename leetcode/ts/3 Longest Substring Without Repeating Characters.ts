function lengthOfLongestSubstring(s: string): number {
    let res : number = 0
    let right : number = 0
    let left : number = 0
    let map : Map<any, boolean> = new Map()
    
    while(right < s.length){
        if(!map.has(s[right])){
            map.set(s[right], true)
            res = Math.max(res,  right - left + 1 )
            ++right
        }else{
            map.delete(s[left++])                         
        }
    }
    return res
};