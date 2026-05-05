class Solution {
    public int numRescueBoats(int[] people, int limit) {
        Arrays.sort(people);
        int l = 0;
        int r = people.length - 1;
        int num = 0;
        while(l <= r){
            if(people[l] + people[r] <= limit){
                System.out.println(l+" "+r);
                l++;r--;
            }
            else{
                r--;
            }
            num++;
        }
        return num;
    }
}