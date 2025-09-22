class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<int> row(m, 0), col(n, 0);
        unordered_map<int,pair<int,int>> map;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                map[mat[i][j]] = {i,j};
            }
        }
        for(int i = 0;i<m*n;i++){
            auto [x,y] = map[arr[i]];
            row[x]++;
            col[y]++;
            if(row[x] == n || col[y] == m) 
                return i;   
        }

        return -1;
    }
};