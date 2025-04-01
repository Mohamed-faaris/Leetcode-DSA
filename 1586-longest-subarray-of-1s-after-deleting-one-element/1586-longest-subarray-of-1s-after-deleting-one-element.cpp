class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l , r;
        l = r = 0;
        int c = 0, max1s = 0;
        while(r<nums.size()) {
            max1s = max(max1s,r-l);
            c += !nums[r++];
            while(c>k) c -= !nums[l++];
        }
        return max(max1s,r-l);
    }
    int longestSubarray(vector<int>& nums) {
        return longestOnes(nums,1) -1;
    }
};