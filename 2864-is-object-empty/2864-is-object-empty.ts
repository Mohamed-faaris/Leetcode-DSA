type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };
type Obj = Record<string, JSONValue> | JSONValue[]

function isEmpty(obj: Obj): boolean {
    return JSON.stringify(obj) === JSON.stringify({}) || JSON.stringify(obj) === JSON.stringify([])
};