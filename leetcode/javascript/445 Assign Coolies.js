var findContentChildren = function(g, s) {
    var res = 0, index = 0;
    s.sort ((a, b) => a - b);
    g.sort ((a, b) => a - b);
    for(i in s){
        s[i] >= g[index] ? (++index && ++ res):'';
        if(index == g.length){
            break;
        }
    }
    return res;
};