class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()) return false;
        //int left=0;
        vector<int> need(26,0),window(26,0);
        for(int i=0;i<s1.size();i++){
            need[s1[i]-'a']++;
        }
        int right=0,left=0;
        while(right<s2.size()){
            if(right-left>=s1.size()){
                window[s2[left]-'a']--;
                left++;
            }
            window[s2[right]-'a']++;
            right++;
            if(window==need) return true;
        }
        return false;
    }
};