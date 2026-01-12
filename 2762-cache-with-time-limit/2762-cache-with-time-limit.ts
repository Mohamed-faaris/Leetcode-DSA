class TimeLimitedCache {
    private map: Map<number, { value: number; timeoutId: any }>;

    constructor() {
        this.map = new Map();
    }

    set(key: number, value: number, duration: number): boolean {
        const exists = this.map.has(key);

        if (exists) {
            clearTimeout(this.map.get(key)!.timeoutId);
        }

        const timeoutId = setTimeout(() => {
            this.map.delete(key);
        }, duration);

        this.map.set(key, { value, timeoutId });

        return exists;
    }

    get(key: number): number {
        return this.map.get(key)?.value ?? -1;
    }

    count(): number {
        return this.map.size;
    }
}
