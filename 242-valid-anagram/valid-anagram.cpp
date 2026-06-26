class Solution {
public:
    bool isAnagram(string str, string ttr) {
        if(str.size()!=ttr.size()) return false;
        unordered_map<char,int> hmap;
        for(int i=0;i<str.size();i++){
            char s=str[i],t=ttr[i];
            hmap[s]++;hmap[t]--;
        }
        for(int i=0;i<str.size();i++){
            char s=str[i],t=ttr[i];
            if(hmap[s]!=hmap[t]){return false;}
        }
        return true;
    }
};