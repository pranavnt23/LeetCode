class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> strs1;vector<vector<string>> res;
        for (auto str : strs) {
            sort(str.begin(), str.end()); 
            strs1.push_back(str); 
        }

        vector<bool> visited(strs.size(), false);
        
        for (int i = 0; i < strs1.size(); i++) {
            if (visited[i]) continue; 
            vector<string> temp;
            temp.push_back(strs[i]); 
        
            for (int j = i + 1; j < strs1.size(); j++) {
                if (strs1[i] == strs1[j]) { 
                    temp.push_back(strs[j]); 
                    visited[j] = true; 
                }
            }
            res.push_back(temp); 
        }
        return res;
    }
};