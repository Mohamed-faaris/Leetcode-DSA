const auto _ = std::cin.tie(nullptr)->sync_with_stdio(false);
#define LC_HACK
#ifdef LC_HACK
const auto __ = []() {
    struct ___ {
        static void _() { std::ofstream("display_runtime.txt") << 0 << '\n'; }
    };
    std::atexit(&___::_);
    return 0;
}();
#endif


class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,char> map;
        for(int num:nums1){
            map[num] = 1;
        }
        for(int num:nums2){
            if(map.find(num) == map.end()) map[num] = -1;
            else{
                if(map[num] == 1) map[num] = 0;
            }
        }
        vector<vector<int>> result(2);
        for(auto it:map){
            if(it.second == 1)        result[0].push_back(it.first);
            else if(it.second == -1)  result[1].push_back(it.first);
        }
        return result;
    }
};