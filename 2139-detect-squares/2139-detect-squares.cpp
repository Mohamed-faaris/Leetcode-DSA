
class DetectSquares {
public:
    vector<pair<int,int>> pts;
    map<long,int> ptsCnt;
    long getKey(int x,int y)
    {
        return (static_cast<long>(x) << 32) | static_cast<long>(y);
    }
    DetectSquares() {}
    
    void add(vector<int> point) {
        pts.push_back({point[0],point[1]});
        ptsCnt[getKey(point[0],point[1])] += 1;
    }
    
    int count(vector<int> point) {
        int px = point[0], py = point[1], count = 0;
        for(auto& [x,y]:pts){
            if(abs(px - x) == abs(py - y) && x != px){
                count += ptsCnt[getKey(x,py)] * ptsCnt[getKey(px,y)];
            }
        }
        return count;
    }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */