public class Solution {
    int countTrues(boolean[] arr) {
        int count = 0;
        for (boolean v : arr) {
            if (v)
                count++;
        }
        return count;
    }

    public long distinctNames(String[] ideas) {
        Map<String, boolean[]> mp = new HashMap<>();
        int[][] count = new int[26][26];
        long res = 0;

        for (String s : ideas) {
            int firstChar = s.charAt(0) - 'a';
            String suffix = s.substring(1);
            mp.putIfAbsent(suffix, new boolean[26]);
            mp.get(suffix)[firstChar] = true;
        }

        for (boolean[] arr : mp.values()) {
            for (int i = 0; i < 26; i++) {
                if (arr[i]) {
                    for (int j = 0; j < 26; j++) {
                        if (!arr[j]) {
                            count[i][j]++;
                            res += count[j][i];
                        }
                    }
                }
            }
        }
        return 2 * res;
    }
}