

var flat = function (arr, n, res = []) {
   
    for(let i = 0; i < arr.length; i++) {
        if(Array.isArray(arr[i]) && n)
            flat(arr[i], n - 1, res);
        else
            res.push(arr[i]);
    }

    return res;
    
};