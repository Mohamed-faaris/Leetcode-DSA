class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int num:nums) sum += num;
        int prevSum = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(sum - prevSum - nums[i] == prevSum) return i;
            prevSum += nums[i];
        }
        return -1;
    }
};