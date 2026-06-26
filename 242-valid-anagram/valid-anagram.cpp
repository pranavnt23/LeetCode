class Solution {
public:
    bool isAnagram(string str, string ttr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(str.size()!=ttr.size()) return false;
        unordered_map<char,int> hmap;
        for(int i=0;i<str.size();i++){
            hmap[str[i]]++;hmap[ttr[i]]--;
        }
        for(const auto&[charr,mapp]:hmap){
            if(mapp!=0) return false;
        }
        return true;
    }
};