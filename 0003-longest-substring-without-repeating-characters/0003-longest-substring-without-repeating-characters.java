class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        int l = 0, r = 0, result = 0;
        while (l <= r && r < s.length()) {
            while (map.containsKey(s.charAt(r))) {
                map.remove(s.charAt(l));
                l++;
            }
            map.put(s.charAt(r), 1);
            r++;
            result = Math.max(r - l, result);
        }
        return result;
    }
}