class Solution {
public:
    bool hasAlternatingBits(int n) {
        int i = n%2;
        while(n){
            if(n%2 != i) return false;
            i = (i+1)%2;
            n/=2;
        }
        return true;
    }
};