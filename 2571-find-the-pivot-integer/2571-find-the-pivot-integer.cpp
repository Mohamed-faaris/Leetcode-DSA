class Solution {
public:
    int pivotInteger(int n) {
        double i = pow((n*n+n)/2,0.5);
        if((int)i == i) return i;
        else return -1;
    }

};