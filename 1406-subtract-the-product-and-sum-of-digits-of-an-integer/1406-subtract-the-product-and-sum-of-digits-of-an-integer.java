class Solution {
    public int subtractProductAndSum(int n) {
        int mul=1,sum=0,rem=0;
        while(n!=0)
        {
            rem=n%10;
            mul*=rem;
            sum+=rem;
            n/=10;
        }
        return mul-sum;
    }
}