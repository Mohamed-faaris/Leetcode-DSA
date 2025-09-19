class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int arr[26] = {0};
        for(int i = 0;i<s.length();i++){
            int x = s[i] - 'a';
            //cout  << arr[x]<<s[i]<< i<< "\n";
            if(arr[x]){
                
                if(i-arr[x] != distance[x]) 
                    return false; 
            }
            else{
                arr[x] = i+1;
            }
        }
        return true;
    }
};