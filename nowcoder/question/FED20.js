function append(arr, item) {
    let res = new Array(...arr);
    res.push(item);
    return res;
}