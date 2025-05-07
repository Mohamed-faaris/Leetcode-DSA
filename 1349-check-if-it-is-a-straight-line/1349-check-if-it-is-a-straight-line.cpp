class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
    int x0 = coordinates[0][0], y0 = coordinates[0][1];
    int x1 = coordinates[1][0], y1 = coordinates[1][1];

    for (const auto& point : coordinates) {
        int x = point[0], y = point[1];
        if ((y1 - y0) * (x - x0) != (y - y0) * (x1 - x0))
            return false;
    }
    return true;
}

};