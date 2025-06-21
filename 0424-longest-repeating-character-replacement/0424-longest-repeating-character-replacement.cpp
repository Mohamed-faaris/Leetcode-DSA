class Solution {
public:
    int characterReplacement(string s, int k) {
        int map[128] = {0};
        int l = 0 , r = 0;
        int maxValue  = 0;
        int maxF = 0, total = 0;
        while(r < s.length()){
            map[s[r]]++;
            maxF = max(maxF, map[s[r]]);
            total = r - l + 1;
            if(total - maxF > k){
                map[s[l++]]--;
            }
            maxValue = max(r - l + 1,maxValue);
            r++;
        }
        return maxValue;
    }
};