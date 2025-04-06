type P = Promise<number>

async function addTwoPromises(promise1: P, promise2: P): P {
    const [val1, val2] = await Promise.all([promise1, promise2]);
    return val1 + val2;
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */