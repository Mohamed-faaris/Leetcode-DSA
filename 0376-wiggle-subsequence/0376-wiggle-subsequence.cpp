class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return n;

        int dir = 0; // direction: +1 (up), -1 (down)
        int count = 1; // always count the first element
        for (int i = 1; i < n; ++i) {
            int diff = nums[i] - nums[i - 1];
            if (diff > 0 && dir != 1) {
                dir = 1;
                count++;
            } else if (diff < 0 && dir != -1) {
                dir = -1;
                count++;
            }
        }
        return count;
    }
};
