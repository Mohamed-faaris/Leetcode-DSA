class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        queue<pair<int, int>> q;
        int target = image[sr][sc];
        if(target == color) return image;
        image[sr][sc] = color;
        q.push({sr, sc});
        static const vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        while (q.size()) {
            auto [x, y] = q.front();
            q.pop();
            for (auto& [dx, dy] : dir) {
                int i = x + dx;
                int j = y + dy;
                if (i < 0 || j < 0 || i >= image.size() ||
                    j >= image[0].size())
                    continue;
                if(target == image[i][j]){
                    image[i][j] = color;
                    q.push({i,j});
                }
            }
        }
        return image;
    }
};