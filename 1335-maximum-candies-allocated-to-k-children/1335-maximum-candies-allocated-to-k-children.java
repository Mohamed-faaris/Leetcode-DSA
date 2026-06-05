class Solution {
    public int maximumCandies(int[] candies, long k) {
        int low = 0;
        int high = 0;
         for (int candie : candies) high = Math.max(candie,high);

        while (low <= high) {
            int count = 0;
            int middle = low + (high - low) / 2;
            if (isPossible(candies, k, middle)) {
                low = middle + 1;
            } else {
                high = middle -1;
            }
        }
        return high;
    }

    private boolean isPossible(int[] candies, long k, int middle) {
        if(middle == 0) return true;
        long count = 0;
        for (int candie : candies) {
            count += candie / middle;
            if (count >= k)
                return true;
        }
        return false;
    }
}