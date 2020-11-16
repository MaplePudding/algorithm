func lengthOfLongestSubstring(s string) int {
    
    result :=  -1
    dict := make(map[byte]int)
    d := -1
    
    for i := 0; i < len(s); i++ {
        if v, ok := dict[s[i]]; !ok {
            dict[s[i]] = i
            d++
        } else {
            d = min(i - v - 1, d + 1)
            dict[s[i]] = i
        }
        result = max(result, d)
    }
    return result + 1
}

func max(a int, b int) int {
    if a > b {
        return a
    }
    return b
}

func min(a int, b int) int {
    if a < b {
        return a
    }
    return b
}