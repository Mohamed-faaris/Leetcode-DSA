class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCandies = *max_element(candies.begin(),candies.end()); 
        for(int candie:candies)
        {
            result.push_back(candie+extraCandies >= maxCandies); 
        }
        return result;
    }
};