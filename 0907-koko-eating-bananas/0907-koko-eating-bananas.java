class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int l = 1;
        int r = piles[0];
        for (int i = 1; i < piles.length; i++) {
            r = Math.max(r, piles[i]);
        }

        // int result = 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            // System.out.println("" + m + " " + l + " " + r + " " + isPossible(piles, h, m));
            if (isPossible(piles, h, m)) {
                // result = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return l;
    }

    private Boolean isPossible(int[] piles, int h, int k) {
        int count = 0;
        for (int pile : piles) {
            count += (pile + k - 1) / k;
            if (count > h)
                return false;
        }
        return true;
    }
}