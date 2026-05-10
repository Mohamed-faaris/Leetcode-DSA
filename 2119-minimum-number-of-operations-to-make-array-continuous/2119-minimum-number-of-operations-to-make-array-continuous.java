class Solution {
    public int minOperations(int[] nums) {

        Arrays.sort(nums);

        int n = nums.length;
        int max = n - 1;

        int l = 0;
        int r = 0;

        int dupes = 0;

        while (r < n) {

            if (r > 0 && nums[r] == nums[r - 1]) {
                dupes++;
            }

            while (l < r && nums[r] - nums[l] >= n) {

                if (l + 1 < n && nums[l] == nums[l + 1]) {
                    dupes--;
                }
                l++;
            }

            max = Math.min(max, n - ((r - l + 1) - dupes));

            r++;
        }

        return max;
    }
}