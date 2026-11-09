class Solution {
public:
    bool isPalindrome(string s) {
        string ss="";
        for(char str:s){
            char tr=str;
            if(!isalnum(tr)) continue;
            ss+=tolower(tr);
        }
        int left=0,right=ss.size()-1;
        while(left<=right){
            if(ss[left]!=ss[right]) return false;
            left++;right--;
        }
        return true;
    }
};