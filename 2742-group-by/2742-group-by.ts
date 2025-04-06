interface Array<T> {
    groupBy(fn: (item: T) => string): Record<string, T[]>
}


Array.prototype.groupBy = function(this,fn) {
    let obj = {}
    for(const elem of this)
    {
        const key = fn(elem)
        obj[key] ? obj[key].push(elem) : obj[key] = [elem]
    }
    return obj
}

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */