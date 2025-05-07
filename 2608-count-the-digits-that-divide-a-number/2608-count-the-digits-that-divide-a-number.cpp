class Solution {
public:
    int countDigits(int num) {
        int t = num,res = 0;
        while(t){
            res += (num%(t%10) == 0);
            t /= 10;
        }
        return res;
    }
};