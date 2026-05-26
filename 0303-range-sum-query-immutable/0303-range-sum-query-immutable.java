class NumArray {
    int[] presum = null;

    public NumArray(int[] nums) {
        presum = new int[nums.length + 1];
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            presum[i] = sum;
            sum += nums[i];
        }
        presum[nums.length] = sum;
    }

    public int sumRange(int left, int right) {
        return - presum[left] + presum[right + 1]; 
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(left,right);
 */