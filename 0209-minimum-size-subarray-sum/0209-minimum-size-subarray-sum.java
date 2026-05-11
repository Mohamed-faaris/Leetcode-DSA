class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int l = 0;
        int r = 0;
        int windowSum = 0;
        int min = nums.length + 1;
        while (r < nums.length) {
            windowSum += nums[r];
            r++;
            while (windowSum >= target) {
                min = Math.min(min, r - l);
                windowSum -= nums[l];
                l++;
            }
            // if (windowSum == target) {
            // }
            // System.out.println("" + l + " " + r + " " + windowSum);
        }
        // System.out.println("" + l + " " + r + " " + windowSum);

        return min == nums.length + 1 ? 0:min;
    }
}