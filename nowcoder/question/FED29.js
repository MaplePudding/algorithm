function findAllOccurrences(arr, target) {
    let res = [];
    arr.forEach(function(value, index, arr){
        if(value === target){
            res.push(index);
        }
    })
    return res;
}