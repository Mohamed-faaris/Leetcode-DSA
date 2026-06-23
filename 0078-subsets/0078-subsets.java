class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>>  ss = new ArrayList<>();
        List<Integer> s = new ArrayList<>();
        h(0,s,ss,nums);
        return ss;
    }
    private void h(int i,List<Integer> s,List<List<Integer>> ss,int[] nums){
        // System.out.println(i+" "+s);
        if(i >= nums.length){
            ss.add(new ArrayList<>(s));
            return;
        }
        h(i+1,s,ss,nums);
        s.add(nums[i]);
        h(i+1,s,ss,nums);
        s.remove(s.size() - 1);
    }
}