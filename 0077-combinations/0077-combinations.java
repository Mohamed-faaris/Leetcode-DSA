class Solution {
    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> ss = new ArrayList<>();
        List<Integer> s = new ArrayList<>();
        dfs(1,n, k, s, ss);
        return ss; 
    }
    private void dfs(int i,int n, int k, List<Integer> s, List<List<Integer>> ss) {
        if(s.size() == k){
            ss.add(new ArrayList(s));
            return;
        }else if(s.size() + (n - i + 1) < k){
            return;
        }
        dfs(i + 1,n,k,s,ss);
        s.add(i);
        dfs(i + 1,n,k,s,ss);
        s.remove(s.size()-1);
    }
}