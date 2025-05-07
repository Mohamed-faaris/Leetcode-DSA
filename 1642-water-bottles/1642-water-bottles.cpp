class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int n = 0,rem;
        while(numBottles>=numExchange)
        {
            cout << numBottles <<" ";
            rem = numBottles%numExchange;
            n  += numBottles - rem;
            numBottles = rem + numBottles/numExchange;
        }
        return n + numBottles;
    }
};