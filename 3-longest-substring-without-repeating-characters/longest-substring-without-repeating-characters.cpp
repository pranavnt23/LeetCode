class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_map<char,int> hmap;
        int left=0,max_sub=0;
        for(int i=0;i<str.size();i++){
            if(hmap.find(str[i])!=hmap.end()){
                left=max(left,hmap[str[i]]+1);
            }
            hmap[str[i]]=i;
            max_sub=max(i-left+1,max_sub);
        }
        return max_sub;
    }
};
