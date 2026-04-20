class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        vector<int> mpp(256, -1);
        int maxLen = 0;
        int left = 0, right = 0;

        while(right<n) {
            if(mpp[s[right]] != -1) {
                left = max(mpp[s[right]]+1, left); //check if the char is in the range left-right
            }

            mpp[s[right]] = right;
            maxLen = max(maxLen, (right - left + 1));
            right++;
        }
        return maxLen;
    }
};