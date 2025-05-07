class Solution {
public:
    int countBits(int n){
        int c = 0;
        while(n){
            if(n%2==1) c++;
            n/=2;
        }
        return c;
    } 
    int hammingDistance(int x, int y) {
        //cout<<countBits(x)<<countBits(y)<<countBits(x&y);
        return(countBits(x)+countBits(y)-2*countBits(x&y));
    }
};