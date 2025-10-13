class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1 = 0,rob2 = 0;
        //rob2,rob1,num
        for(int num:nums){
            int temp = max(rob2 + num, rob1);
            rob2 = rob1;
            rob1 = temp;
        }
        return max(rob1,rob2);
    }
};