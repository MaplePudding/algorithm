func max(a int, b int) int {
    if(a > b){
        return a
    }else{
        return b
    }
}

func lengthOfLongestSubstring(s string) int {
    mp := make(map[byte]byte)
    i := 0
    res := 0
    left := 0
    
    for; i < len(s);{
        _, ok := mp[s[i]]
        
        if(ok){
            delete(mp, s[left])
            left++
        }else{
            mp[s[i]] = s[i]
            i++
            res = max(res, len(mp))
        }
    }
    
    return res
}