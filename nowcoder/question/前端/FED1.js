function bindThis(f, oTarget) {

    return function(x,y){
        return f.call(oTarget,x,y);
    };
}