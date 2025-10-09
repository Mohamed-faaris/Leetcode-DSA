class Solution {
public:
    long cn(int n, int k) {
        // r!*n!/(r-n)!
        //  6*5*4/3*2
        long v = 1;
        for (int i = 1; i <= k; i++) {
            v = v * (n - k + i) / i;
        }
        return v;
    }
    int uniquePaths(int m, int n) { 
        return cn(m + n - 2, min(m, n) - 1); 
    }
};