class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(!isalnum(c)) continue;
            s1+=tolower(c);
        }
        int i=0;int j=s1.size()-1;
        while(i<=j){
            if(s1[i]!=s1[j]) return false;
            i++;j--;
        }
        return true;    
    }
};