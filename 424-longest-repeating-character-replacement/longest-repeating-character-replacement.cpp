class Solution {
public:
    int characterReplacement(string str, int k) {
        unordered_map<char,int> hmap;
        int mx_len=0,mx_freq=0,len=0,i=0;
        for(int j=0;j<str.size();j++){
            char l=str[j];
            hmap[l]++;
            if(hmap[l]>mx_freq) mx_freq=hmap[l];
            len=j-i+1;
            if(len-mx_freq > k){
                hmap[str[i]]--;i++;
                len=j-i+1;
            }
            mx_len=max(mx_len,len);
        }
        return mx_len;
    }
};