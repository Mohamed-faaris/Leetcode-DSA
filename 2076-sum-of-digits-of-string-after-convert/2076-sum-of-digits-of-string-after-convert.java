class Solution {

    public int getLucky(String s, int k) {

        int sum = 0;

        for(char ch : s.toCharArray()) {

            int value = ch - 'a' + 1;

            while(value > 0) {
                sum += value % 10;
                value /= 10;
            }
        }

        while(--k > 0) {

            int next = 0;

            while(sum > 0) {
                next += sum % 10;
                sum /= 10;
            }

            sum = next;
        }

        return sum;
    }
}