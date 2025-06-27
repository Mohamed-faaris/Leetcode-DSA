class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(n);
        vector<int> indegree(n, 0);

        for (auto& p : prerequisites) {
            adj[p[1]].push_back(p[0]);
            indegree[p[0]]++;
        }

        queue<int> q;
        for (int i = 0; i < n; ++i) {
            if (indegree[i] == 0)
                q.push(i);
        }

        vector<int> res;
        while (!q.empty()) {
            int curr = q.front(); q.pop();
            res.push_back(curr);

            for (int nei : adj[curr]) {
                if (--indegree[nei] == 0)
                    q.push(nei);
            }
        }

        return (res.size() == n) ? res : vector<int>();
    }
};
