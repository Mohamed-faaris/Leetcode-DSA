class Solution {
public:
    int accountBalanceAfterPurchase(int p) {
        int rem = p%10;
        p = p - p%10 ;
        if(rem>4) p+=10; 
        return 100-p; 
    }
};