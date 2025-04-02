class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int h = 0 , maxH = 0;
        for(int g:gain)
        {
            maxH = max(maxH,h);
            h += g; 
        }
        return max(maxH,h);
    }
};