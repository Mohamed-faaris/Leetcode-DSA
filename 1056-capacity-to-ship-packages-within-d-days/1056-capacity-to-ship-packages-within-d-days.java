class Solution {
    public int shipWithinDays(int[] weights, int days) {
        int l = weights[0];
        int r = weights[0];

        for(int weight:weights){
            l = Math.min(l,weight);
            r += weight;
        }

        while (l <= r) {
            int m = l + (r - l) / 2;
            // System.out.println("" + l + r + " " + m + isPossible(weights, days, m));
            if (!isPossible(weights, days, m)) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return l;
    }

    private boolean isPossible(int[] weights, int days, int capacity) {
        long current = 0;
        int count = 1;
        for (int weight : weights) {
            if (weight > capacity) {
                return false;
            }

            current += weight;

            if (current > capacity) {
                current = weight;
                count++;

                if (count > days) {
                    return false;
                }
            }
        }
        return true;
    }
}