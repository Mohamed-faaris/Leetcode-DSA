class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int countZero = 0;
        vector<int> ans(nums.size(), 0);
        int n = nums.size();
        int pro = 1;
        int i = 0;
        for (i = 0; i < n; i++) {
            if (nums[i] == 0)
                countZero++;
            else
                pro *= nums[i];
        }
        if (countZero > 1)
            return ans;
        else if (countZero == 1) {
            for (i = 0; i < n; i++) {
                if (nums[i] == 0)
                    ans[i] = pro;
            }
        } else {
            for (i = 0; i < n; i++) {
                ans[i] = pro / nums[i];
            }
        }
        return ans;
    }
};