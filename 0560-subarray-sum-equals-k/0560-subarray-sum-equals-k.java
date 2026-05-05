class Solution {
    public int subarraySum(int[] nums, int k) {
        HashMap<Integer,Integer> premap = new HashMap<>();
        int presum = 0;
        int total = 0;
        for(int i = 0; i < nums.length; i++)
        {
            premap.merge(presum,1,Integer::sum);
            presum += nums[i];
            int key = presum - k;
            total += premap.getOrDefault(key,0);
            // System.out.print(key);
            // System.out.print(premap);
            // System.out.println(total);
        }
        return total;
    }
}