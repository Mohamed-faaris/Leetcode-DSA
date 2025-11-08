class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int result = 0;
        int sum = 0;
        int sumg = 0;

        for (int i = 0; i < gas.size(); i++) {
            sum += gas[i] - cost[i];
            sumg += gas[i] - cost[i];
            if (sum < 0) {
                result = i + 1;
                sum = 0;
            }
        }
        if (result == gas.size() || sumg < 0)
            return -1;
        return result;
    }
};