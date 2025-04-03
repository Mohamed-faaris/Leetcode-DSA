class Solution {
public:
    string simplifyPath(string oldPath) {
        vector<string> res;
        stringstream ss(oldPath);
        string path;
        while(getline(ss,path,'/'))
        {
            if(path == "" || path == ".") continue;
            if(path == "..") {if(res.size()) {res.pop_back();}}
            else res.push_back(path);
        }
        string result;
        for (const string& comp : res) {
            result += "/" + comp;
        }

        return result.empty() ? "/" : result;
    }
};