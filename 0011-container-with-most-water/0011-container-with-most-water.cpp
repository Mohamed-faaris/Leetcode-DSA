class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0,j=h.size()-1,wc=0;
        while(i<j){
            //cout<<i<<" "<<j<<" "<<wc<<"\n";
            wc=max(min(h[i],h[j])*(j-i),wc);
            if(h[i]<h[j]){i++;}
            else         {j--;}
        }
        return wc;
    }
};