class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);cout.tie(NULL);
        unordered_map<string,vector<string>> hmap;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            hmap[key].push_back(s);
        }
        vector<vector<string>> res;
        for(const auto&[key,ans]:hmap){
            res.push_back(ans);
        }
        return res;
    }
};