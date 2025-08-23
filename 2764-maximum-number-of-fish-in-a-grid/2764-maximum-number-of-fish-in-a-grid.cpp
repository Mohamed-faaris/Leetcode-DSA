class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int fishMax = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] > 0)
                    fishMax = max(fishMax, dfs(i, j, grid));
            }
        }
        return fishMax;
    }
    int dfs(int i, int j, vector<vector<int>>& grid) {
        int fish = grid[i][j];
        grid[i][j] = 0;
        static const vector<pair<int, int>> dir = {
            {0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        for (auto& [di, dj] : dir) {
            int x = i + di;
            int y = j + dj;
            if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size())
                continue;
            
            if (grid[x][y] > 0)
                fish += dfs(x, y, grid);
        }
        //cout << i <<","<< j<<":" <<fish<< " \n";
        return fish;
    }
};