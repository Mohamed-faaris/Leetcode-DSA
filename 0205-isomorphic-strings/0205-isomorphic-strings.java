class Solution {
    public boolean isIsomorphic(String s, String c) {
        char[] map = new char[128];
        for (int i = 0; i < s.length(); i++) {
            if (map[s.charAt(i)] == 0) {
                for(int k = 0;k < 128;k++) 
                    if(c.charAt(i) == map[k])
                        return false;
                map[s.charAt(i)] = c.charAt(i);
            } else if (map[s.charAt(i)] != c.charAt(i)) {
                return false;
            }
        }
        return true;
    }
}