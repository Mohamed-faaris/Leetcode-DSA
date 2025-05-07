class Solution {
public:
    int alternateDigitSum(int n) {
        int s = 1,r = 0; 
        while(n)
        {
            s *= -1;
            r += s * n%10;
            n /= 10;
        }
        return s*r;
    }
};