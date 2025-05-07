class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int e = 0,o = 0;
        for(int val:position) val%2?o++:e++;
        return min(o,e);
    }
};