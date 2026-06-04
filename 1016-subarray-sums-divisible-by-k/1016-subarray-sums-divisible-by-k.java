class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        int window = 0;
        int l = 0, r = 0;
        int[] prefix = new int[k];
        int sum = 0;
        int c = 0;
        prefix[0]++;
        while (r < nums.length) {
            sum += nums[r];
            r++;
            // for(int ele:prefix) 
            // System.out.print(ele+"|");
            // System.out.println("  "+pMod(sum,k)+"  "+sum);
            c += prefix[pMod(sum,k)];
            prefix[pMod(sum, k)]++;
        }
        return c;
    }

    private int pMod(int value, int mod){
        int result = value % mod;
        return result < 0 ? mod + result : result;
    }
}