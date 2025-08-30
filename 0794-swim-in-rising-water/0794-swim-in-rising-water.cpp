#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        int left = 0, right = n * n ;
        int res = -1;

        while (left < right) {
            int height = left + (right - left) / 2;
            bitset<2500> visited; // works up to n=50 (50*50=2500)
            if (dfs(0, 0, grid, height, visited, n)) {
                res = height;
                right = height;
            } else {
                left = height + 1;
            }
        }
        return res;
    }

    bool dfs(int x, int y, vector<vector<int>>& grid, int height,
             bitset<2500>& visited, int n) {
        if (x < 0 || y < 0 || x >= n || y >= n)
            return false;
        if (grid[x][y] > height)
            return false;

        int idx = x * n + y;
        if (visited[idx])
            return false;
        visited[idx] = true;

        if (x == n - 1 && y == n - 1)
            return true;

        return dfs(x + 1, y, grid, height, visited, n) ||
               dfs(x, y + 1, grid, height, visited, n) ||
               dfs(x - 1, y, grid, height, visited, n) ||
               dfs(x, y - 1, grid, height, visited, n);
    }
};
