function maxLength( arr ) {
    // write code here
    let left = 0, max = 0, map = new Map();
    for (let right = 0; right < arr.length; right++) {
        if (map.has(arr[right]) && map.get(arr[right]) >= left) {
            left = map.get(arr[right]) + 1;
        }
        map.set(arr[right], right);
        max = Math.max(max, right - left + 1);
    }
    return max;
}
module.exports = {
    maxLength : maxLength
};