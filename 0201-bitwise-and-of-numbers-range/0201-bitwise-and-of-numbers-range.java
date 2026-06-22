class Solution {
    public int rangeBitwiseAnd(int l, int r) {
        int c = 0;
        while (l != r) {
            l = l >> 1;
            r = r >> 1;
            c++;
        }
        return l << c;
    }
}