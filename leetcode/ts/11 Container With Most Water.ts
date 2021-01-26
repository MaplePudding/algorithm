function maxArea(height: number[]): number {
    let left : number = 0;
    let right : number = height.length - 1;
    let capacity : number = 0;
    
    while(left < right){
        capacity = Math.max(capacity, Math.min(height[left], height[right]) * (right - left))
        height[left] < height[right] ? ++left : --right
    }
    return capacity
};