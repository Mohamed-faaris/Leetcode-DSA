class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0, n = 0;
        for(int num:nums)
            if(num%6 == 0) 
            {
                sum += num;
                n++;
            }
        return n==0? 0 : sum/n;
    }
};