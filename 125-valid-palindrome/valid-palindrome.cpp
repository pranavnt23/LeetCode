class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(auto str:s){
            if(!iswalnum(str)){continue;}
            if(isupper(str)){
                s1+=tolower(str);
            }
            else{s1+=str;}
        }
        int i=0,j=s1.size()-1;
        while(i<j){
            if(s1[i]!=s1[j]){return false;}
            i++;j--;
        }
        return true;
    }
};