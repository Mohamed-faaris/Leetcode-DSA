class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r, d;       
        int n = senate.length(); 
        for(int i = 0; i < n; i++)
        {
            if(senate[i] == 'R') r.push(i);
            else                 d.push(i);
        }
        while(r.size() && d.size())
        {
            if(r.front() < d.front()) 
            {
                r.push(r.front()+n);
                r.pop();
                d.pop();
            }
            else
            {
                d.push(d.front()+n);
                d.pop();
                r.pop();
            }
        }
        return d.empty() ? "Radiant" : "Dire";

    }
};