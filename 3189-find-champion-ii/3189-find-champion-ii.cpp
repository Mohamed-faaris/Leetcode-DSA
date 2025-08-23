class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> in(n,0);
        for(vector<int>& edge:edges){
            in[edge[1]]+=1;
        }
        int champion = -1;
        for(int i = 0;i < n;i++){
            if(in[i] == 0){
                if(champion != -1) return -1;
                champion = i;
            }
        }
        return champion;
    }
};