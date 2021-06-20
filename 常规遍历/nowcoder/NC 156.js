function foundOnceNumber( arr ,  k ) {
    // write code here
    arr.sort()
    let index = 0
    while(index < arr.length){
        if(index != arr.length - 1 && arr[index] == arr[index + 1]){
            index += k
        }else{
            return arr[index]
        }
    }
}