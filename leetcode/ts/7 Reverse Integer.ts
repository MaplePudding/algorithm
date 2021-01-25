function reverse(x: number): number {
    let res : number = 0
    while(x != 0){
        if(Math.abs(res) > 214748364){
            return 0
        }
        res = res * 10 + x % 10
        if(x < 0){
            x = Math.floor(Math.abs(x / 10)) * -1;
        }else{
            x = Math.floor(x / 10)
        }
    }
    return res
};