class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_set<int> freq;
        unordered_map<int,int> map;
        for(int i:arr)
        {
            map[i] += 1;
        }
        for(pair<int,int> kv:map) 
        if(freq.find(kv.second) == freq.end())freq.insert(kv.second);
        else return false;
        return true;
    }
};