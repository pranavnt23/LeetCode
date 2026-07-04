class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       if(s2.length()<s1.length()) return false;

        vector<int> need(26,0), window(26,0);
        for(int i=0;i<s1.size();i++){
            need[s1[i]-'a']++;
        }
        int left=0,right=0;
        while(right<s2.size()){
            window[s2[right]-'a']++;

            if(left+right+1>s1.size()){
                window[s2[left]-'a']--;
                left++;
            }

            if(need==window) return true;
            right++;
        }
        return false;
    }
};