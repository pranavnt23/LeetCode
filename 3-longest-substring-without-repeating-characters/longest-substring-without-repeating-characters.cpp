class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_map<char,int> hmap;
        int max_sub=0,left=0;
        for(int i=0;i<str.size();i++){
            if(hmap.find(str[i])!=hmap.end()){
                left=max(left,hmap[str[i]]+1);
            }
            max_sub=max(max_sub,i-left+1);
            hmap[str[i]]=i;
        }
        return max_sub;
    }
};
