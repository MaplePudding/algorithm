function isPalindrome(x: number): boolean {
    if (x < 0) 
        return false
    let div : number = 1
    while (x / div >= 10) div *= 10
    while (x > 0) {
        let left : number = Math.floor(x / div)
        let right = x % 10
        if (left != right) return false
        x = Math.floor((x % div) / 10)
        div = Math.floor(div / 100)
    }
    return true
};