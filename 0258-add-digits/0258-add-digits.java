class Solution {
    public int addDigits(int num) {
        while(num>9){
            int t = 0;
            while(num>0)
            {
                t+=num%10;
                num /= 10;
            }
            num = t;
        }
        return num;
    }
}