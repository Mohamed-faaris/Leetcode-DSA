class Solution {
    public int reverse(int x) {
        boolean isNegative = x < 0;
        if(isNegative) x = -x;
        int t = 0;
        while(x>0){
            if(t < Integer.MIN_VALUE/10 || t > Integer.MAX_VALUE/10) return 0;
            t = t*10 + x%10;
            x /= 10;
        }
        //System.out.print(isNegative);
        return isNegative?-t:t;
    }
}