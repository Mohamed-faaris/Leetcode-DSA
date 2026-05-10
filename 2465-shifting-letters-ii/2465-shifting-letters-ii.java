class Solution {
    public String shiftingLetters(String s, int[][] shifts) {
        int[] flatenShifts = new int[s.length()];
        for (int[] shift : shifts) {
            int l = shift[0];
            int r = shift[1];
            int value = shift[2] == 0 ? -1 : 1;
            while (l <= r) {
                flatenShifts[l] += value;
                l++;
            }
        }
        for (int i = 0; i < flatenShifts.length; i++) {
            flatenShifts[i] = (flatenShifts[i] % 26 + 26) % 26;
        }
        return shiftingLetters(s, flatenShifts);
    }

    public String shiftingLetters(String s, int[] shifts) {
        int delta = 0;
        char[] arr = s.toCharArray();
        for (int i = 0; i < shifts.length; i++) {
            // System.out.print(shifts[i] + " ");
            arr[i] = (char) ('a' + (arr[i] + shifts[i] - 'a') % 26);
        }
        return new String(arr);
    }
}