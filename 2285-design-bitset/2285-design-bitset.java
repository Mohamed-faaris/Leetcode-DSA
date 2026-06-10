class Bitset {
    private char[] bits;
    private boolean flipped;
    private int onesCount;

    public Bitset(int size) {
        bits = new char[size];
        Arrays.fill(bits, '0');
        flipped = false;
        onesCount = 0;
    }

    public void fix(int idx) {
        char actual = flipped
                ? (bits[idx] == '0' ? '1' : '0')
                : bits[idx];

        if (actual == '0') {
            onesCount++;

            if (!flipped) {
                bits[idx] = '1';
            } else {
                bits[idx] = '0';
            }
        }
    }

    public void unfix(int idx) {
        char actual = flipped
                ? (bits[idx] == '0' ? '1' : '0')
                : bits[idx];

        if (actual == '1') {
            onesCount--;

            if (!flipped) {
                bits[idx] = '0';
            } else {
                bits[idx] = '1';
            }
        }
    }

    public void flip() {
        flipped = !flipped;
        onesCount = bits.length - onesCount;
    }

    public boolean all() {
        return onesCount == bits.length;
    }

    public boolean one() {
        return onesCount > 0;
    }

    public int count() {
        return onesCount;
    }

    public String toString() {
        char[] result = new char[bits.length];

        for (int i = 0; i < bits.length; i++) {
            result[i] = flipped
                    ? (bits[i] == '0' ? '1' : '0')
                    : bits[i];
        }

        return new String(result);
    }
}