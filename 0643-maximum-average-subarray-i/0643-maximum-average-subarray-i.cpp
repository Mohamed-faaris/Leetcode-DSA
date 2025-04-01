class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l , r;
        l = r = 0;
        int sum = 0, maxSum = INT_MIN;
        while((r - l) < k)
        { 
            sum += nums[r++];
        }
        while(r < nums.size()) 
        {
            maxSum = max(maxSum,sum);
            sum -= nums[l++];
            sum += nums[r++];
        }
        return (double)max(maxSum,sum)/k;
    }
};