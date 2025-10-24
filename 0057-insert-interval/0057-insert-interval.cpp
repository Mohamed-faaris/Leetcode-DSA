class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        int i = 0;
        int n = intervals.size();
        vector<vector<int>> newIntervals;
        int start = newInterval[0];
        int end = newInterval[1];
        bool flag = true;
        newIntervals.reserve(n);
        while (i < n) {
            if (intervals[i][1] < start) {
                newIntervals.push_back(intervals[i]);
            } else if (intervals[i][0] > end) {
                if (flag) {
                    newIntervals.push_back({start, end});
                    flag = false;
                }
                newIntervals.push_back(intervals[i]);
            } else {
                start = min(start, intervals[i][0]);
                end = max(end, intervals[i][1]);
            }
            i++;
        }
        if (flag) {
            newIntervals.push_back({start, end});
            flag = false;
        }
        return newIntervals;
    }
};