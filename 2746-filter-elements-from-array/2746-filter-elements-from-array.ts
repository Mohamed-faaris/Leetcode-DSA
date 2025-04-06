type Fn = (n: number, i: number) => any

function filter(arr: number[], fn: Fn): number[] {  
    const returnedArray: number[] = [];
    for (let i=0; i < arr.length; i++) {
        if (fn(arr[i],i)) 
            returnedArray.push(arr[i]);
    }
    return returnedArray;

};