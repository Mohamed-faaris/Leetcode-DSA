class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, multiset<string>> adj;
        for (auto &t : tickets) {
            adj[t[0]].insert(t[1]);
        }

        vector<string> result;
        dfs("JFK", adj, result);
        reverse(result.begin(), result.end()); 
        return result;
    }

    void dfs(string src, unordered_map<string, multiset<string>>& adj, vector<string>& result) {
        auto &dests = adj[src];
        while (!dests.empty()) {
            string next = *dests.begin(); 
            dests.erase(dests.begin());   
            dfs(next, adj, result);
        }
        //cout<<src;
        result.push_back(src); 
    }
};
