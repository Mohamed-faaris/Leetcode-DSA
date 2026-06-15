class Solution {
    public boolean wordPattern(String pattern, String s) {
        int l1 = 0;
        int l2 = 0;
        String[] map = new String[26];
        Set<String> used = new HashSet<>();
        while (l1 < pattern.length() && l2 < s.length()) {
            if (map[pattern.charAt(l1) - 'a'] == null) {
                int start = l2;
                while (l2 < s.length() && s.charAt(l2) != ' ') {
                    l2++;
                }
                if (used.contains(s.substring(start, l2)))
                    return false;
                // System.out.println(pattern.charAt(l1) + ":" + s.substring(start, l2));
                map[pattern.charAt(l1) - 'a'] = s.substring(start, l2);
                used.add(s.substring(start, l2));
            } else {
                int t = 0;
                // System.out.println(map[pattern.charAt(l1) - 'a'] + " : "+ s.substring(l2, l2 + map[pattern.charAt(l1) - 'a'].length()));
                if (!map[pattern.charAt(l1) - 'a'].equals(
                        s.substring(l2, l2 + map[pattern.charAt(l1) - 'a'].length())))
                    return false;
                l2 += map[pattern.charAt(l1) - 'a'].length();
            }
            l1++;
            l2++;
            // System.out.println(l1 + " " + l2 + " " + s.length());
        }
        return l1 == pattern.length()  && l2 == s.length() + 1 ;
    }
}