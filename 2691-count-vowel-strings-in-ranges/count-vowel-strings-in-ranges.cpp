class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans(queries.size());
        unordered_set<char> vowels{'a','e','i','o','u'};
        vector<int> prefix(words.size());
        int sum=0;
        for(int i=0;i<words.size();i++){
            string curw=words[i];
            if(vowels.count(curw[0])&&
            vowels.count(curw[curw.size()-1])){
                sum++;
            }
            prefix[i]=sum;
        }
        for(int i=0;i<queries.size();i++){
            vector<int> currq=queries[i];
            ans[i]=prefix[currq[1]]-
                (currq[0]==0 ? 0:prefix[currq[0]-1]);
        }
        return ans;
    }
};