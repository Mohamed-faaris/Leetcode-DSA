class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n = 0;
        int i = 0,j = 0;
        while(j<nums.size())
        {
            if(nums[j]==0) j++;
            else nums[i++] = nums[j++]; 
        }
        while(i<nums.size())
        {
            nums[i++]=0;
        }
    }
};