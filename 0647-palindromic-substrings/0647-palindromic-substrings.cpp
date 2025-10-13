class Solution {
public:
    int countSubstrings(string ns) {
        long long count = 0;
        for (int i = 0; i < ns.size(); i++) {
            int l = i;
            int r = i;
            while (l >= 0 && r < ns.size() && ns[l] == ns[r]) {
                count++;
                l--;
                r++;
            } 
            l = i ;
            r = i + 1;
            while (l >= 0 && r < ns.size() && ns[l] == ns[r]) {
                count++;
                l--;
                r++;
            }
        }
        return count;
    }
};