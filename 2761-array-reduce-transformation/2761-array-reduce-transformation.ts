type Fn = (accum: number, curr: number) => number

function reduce(nums: number[], fn: Fn, init: number): number {
    nums.forEach((x)=>{init = fn(init,x)});
    return init;
};