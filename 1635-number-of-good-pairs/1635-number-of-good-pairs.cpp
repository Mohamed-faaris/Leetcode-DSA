class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> fTable(101,0);
        for(int num:nums)
        {
            fTable[num] += 1;
        }
        int gp = 0;
        for(int count:fTable)
        {
            gp += (count*(count-1))/2;
        }
        return gp;
    }
};