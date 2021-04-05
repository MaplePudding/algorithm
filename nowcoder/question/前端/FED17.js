function sum(arr) {
    return arr.reduce(function(acc, val, index, arr){
        return acc + val;
    }, 0)
}