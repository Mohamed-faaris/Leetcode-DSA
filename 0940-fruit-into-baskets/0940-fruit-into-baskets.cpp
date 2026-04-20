class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int r = 0, l = 0,res = 0;
        map<int,int> basket;
        while(r<fruits.size()){
            basket[fruits[r]] += 1;
            while(basket.size() > 2){
                basket[fruits[l]] -= 1;
                if(basket[fruits[l]] == 0) {
                    basket.erase(fruits[l]);
                }
                l++;
            }
            res = max(res, r-l+1);
            r++;
        }
        return res;
    }
};