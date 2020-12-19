func generateParenthesis(n int) []string {
    return recP("(", 1, 1, n*2)
}

func recP(s string, n int, count int, max int) []string {
    if n == max {
        if count == 0 {
            return []string{s}
        }
        return []string{}
    }
    strs := []string{}
    if count > 0 {
        strs = append(strs, recP(s+")", n+1, count-1, max)...)
    }
    if count <= max/2 {
        strs = append(strs, recP(s+"(", n+1, count+1, max)...)
    }
    return strs
}