function longestPalindrome(s: string): string {
    if(s.length < 2){
        return s
    }
    let str : string = ''
    let left : number = 0
    let right : number = 0
    let start : number = 0
    let maxLen : number = 0
    
    for(let i = 0; i < s.length; ++i){
        for(let j = 0; j < 2; ++j){
            left = i;
            right = i + j;
            while(left >= 0 && right < s.length && s[left--] == s[right++]){
                if(right - left - 1 > maxLen){
                    start = left + 1
                    maxLen = right - left - 1
                }
            }
        }
    }
    return s.slice(start, start + maxLen)
};