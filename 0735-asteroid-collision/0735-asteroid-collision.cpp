class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stk;
        for(int& i:asteroids)
        {
            if(stk.size() == 0 || i>0) stk.push_back(i);
            else
            {
                while(stk.size())
                {
                    if(stk[stk.size() - 1] < 0)  break;
                    else if(stk[stk.size() - 1] < -i) stk.pop_back();
                    else if(stk[stk.size() - 1] > -i) {i =0;break;}
                    else if(stk[stk.size() - 1] == -i) {i=0;stk.pop_back();break;}
                    //else  {stk.push_back(i);break;}
                }
                if(i) stk.push_back(i);
            }
        }
        return stk;
    }
};