class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); i++) {
            bool left = i == 0 || flowerbed[i - 1] == 0;
            bool right = i == flowerbed.size() - 1 || flowerbed[i + 1] == 0;
            
            if (left && right && flowerbed[i] == 0) {
                flowerbed[i] = 1;
                if(--n <= 0) return true;
            }
        }
        return n <= 0;        
    }
};