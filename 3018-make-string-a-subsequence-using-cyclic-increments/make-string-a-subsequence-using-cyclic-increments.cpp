class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
         ios_base::sync_with_stdio(0);
         cin.tie(0);cout.tie(0);
         int j=0;
         for(int i=0;i<str1.size()&&j<str2.size();i++){
                if(str1[i]==str2[j] ||(str1[i]-'a'+1)%26+'a'==str2[j]){
                    j++;
                }
            }  
            return j == str2.size();
         }
};