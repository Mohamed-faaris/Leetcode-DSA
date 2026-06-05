// class Solution {
//     public int findPeakElement(int[] nums) {
//          if (nums.length == 1) {
//             return 0;
//         }
//         int l = 0, r = nums.length - 2;
//         while (l < r) {
//             int m = l + (r - l) / 2;
//             if(nums[m] > nums[m+1]){
//                 r = m ;
//             }else{
//                 l = m + 1;
//             }
//         }
//         return l;
//     }
// }
class Solution {
    public int findPeakElement(int[] nums) {
        int l = 0;
        int r = nums.length - 1;

        while (l < r) {
            int m = l + (r - l) / 2;

            if (nums[m] > nums[m + 1]) {
                r = m;
            } else {
                l = m + 1;
            }
        }

        return l;
    }
}