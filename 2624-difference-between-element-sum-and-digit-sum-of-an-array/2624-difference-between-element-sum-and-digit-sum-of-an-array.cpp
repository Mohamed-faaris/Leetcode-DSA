class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n)
        {
            sum += n%10;
            n/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int dSum = 0, eSum = 0;
        for(int num:nums)
        {
            dSum += digitSum(num);
            eSum += num;
        }
        return abs(dSum-eSum);
    }
};