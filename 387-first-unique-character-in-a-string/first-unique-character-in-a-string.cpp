class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> hmap;
        for(char st:s){
            hmap[st]++;
        }
        for(int i=0;i<s.size();i++){
            if(hmap[s[i]]==1) return i;
        }
        return -1;
    }
};