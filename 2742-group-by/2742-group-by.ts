interface Array<T> {
    groupBy(fn: (item: T) => string): Record<string, T[]>
}


Array.prototype.groupBy = function(this,fn) {
    let obj = {}
    for(const value of this)
    {
        const key = fn(value)
        if(!obj[key]) obj[key] = []
        obj[key].push(value)
    }
    return obj
}

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */