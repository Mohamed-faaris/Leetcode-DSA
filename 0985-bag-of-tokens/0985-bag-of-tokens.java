class Solution {
    public int bagOfTokensScore(int[] tokens, int power) {
        int l = 0;
        int r = tokens.length;
        int score = 0;
        int maxScore =  0;
        Arrays.sort(tokens);
        while(l<r){
            if(power >= tokens[l]){
                power -= tokens[l];
                score += 1;
                maxScore = Math.max(score, maxScore);
                l++;
            }
            else{
                if (score == 0){
                    return maxScore;
                }
                r--;
                power += tokens[r];
                score -= 1;
            }
        }
        return maxScore;
    }
}