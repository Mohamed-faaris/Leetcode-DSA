class Solution {
    public int numOfSubarrays(int[] arr, int k, int threshold) {
        int target = k * threshold;
        int sum = 0;
        int count = 0;
        for(int i = 0; i < k; i++){
            sum += arr[i];
        }
        // System.out.println(sum + " " + count);\
        if(sum >= target){
            count ++;
        }
        for(int i = k; i < arr.length; i++){
            sum += arr[i];
            sum -= arr[i-k];
            if(sum >= target){
                count ++;
            }
        }
        return count;
    }
}