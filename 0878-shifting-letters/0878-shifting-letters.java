class Solution {
    public String shiftingLetters(String s, int[] shifts) {
        int delta = 0;
        char[] arr = s.toCharArray();
        for (int i = shifts.length - 1; i >= 0; i--) {
            delta += shifts[i];
            delta %= 26;
            arr[i] = (char)('a'+(arr[i] + delta -'a')%26);
        }
        return new String(arr);
    }
}