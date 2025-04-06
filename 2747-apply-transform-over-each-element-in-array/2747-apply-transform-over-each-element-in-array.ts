function map(arr: number[], fn: (n: number, i: number) => number): number[] {
    return (arr.map((x,i)=>fn(x,i)));
};