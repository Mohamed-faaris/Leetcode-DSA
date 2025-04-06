type F = (x: number) => number;

function compose(functions: F[]): F {
    return function(x) {
        for (let i = functions.length - 1; i >= 0; i--) {
            x = functions[i](x);
        }
        return x;
    };
}