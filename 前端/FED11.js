function cssStyle2DomStyle(sName) {
    let i = 0;
    if(sName[0] === '-'){
        i = 1;
    }else{
        i = 0;
    }
    let res = "";
    
    while(i < sName.length){
        if(sName[i] == "-"){
            if(i + 1 < sName.length){
                res += sName[i + 1].toUpperCase();
                ++i;
            }
        }else{
            res += sName[i];
        }
        ++i;
    }
    return res;
}