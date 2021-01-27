function compare(str1 : string, str2 : string) : number{
    if(str1.length < str2.length){
        return -1
    }else if(str1.length > str2.length){
        return 1
    }else{
        return 0
    }
}

function longestCommonPrefix(strs: string[]): string {
    strs.sort(compare)
    if(strs.length == 0){
        return ""
    }
    
    let rangeL : number = strs[0].length
    let index : number = 0
    
    while(index < rangeL){
        for(let j = 0; j < strs.length; ++j){
            if(strs[j][index] != strs[0][index]){
               if(index == 0){
                   return ""
               }else{
                   return strs[0].substring(0, index)
               } 
            }
        }
        ++index
    }
    
    if(index == 0){
        return ""
    }else{
        return strs[0].substring(0, index)
    }
};