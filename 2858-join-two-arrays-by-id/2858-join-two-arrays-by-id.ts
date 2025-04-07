function join(arr1: any[], arr2: any[]): any[] {
  const combinedArray = arr1.concat(arr2);
  const merged: { [key: number]: any } = {};

  combinedArray.forEach((obj) => {
    const id = obj.id;
    if (!merged[id]) {
      merged[id] = { ...obj };
    } else {
      merged[id] = { ...merged[id], ...obj };
    }
  });

  return Object.values(merged)
}