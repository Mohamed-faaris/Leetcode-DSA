type ToBeOrNotToBe = {
    toBe: (val: any) => boolean;
    notToBe: (val: any) => boolean;
};

function expect(val: any): ToBeOrNotToBe {
    const expectedValue = val;
    return {
        toBe: (val: any) => {
            if (expectedValue === val) return true;
            throw new Error("Not Equal");
        },
        notToBe: (val: any) => {
            if (expectedValue !== val) return true;
            throw new Error("Equal");
        }
    };
}