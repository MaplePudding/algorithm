function sqrt( x ) {
    // write code here
    let left = 0, right = x, res = -1
    while(left <= right) {
        const mid = left + Math.floor((right - left) / 2)
        if (mid * mid <= x) {
            res = mid
            left = mid + 1
        } else {
            right = mid - 1
        }
    }
    return res
}