class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> s1,s2;
        stringstream ss1(sentence1),ss2(sentence2);
        string word;
        while(ss1 >> word){
            s1.push_back({word,false});
        }
        while(ss2 >> word){
            s2.push_back({word,false});
        }
        if(s1.size()<s2.size()) swap(s1,s2);
        int n1=s1.size(),n2=s2.size(),start=0,end=0;

        while(start < n2 && s1[start] == s2[start]) start++;
        while(end < n2 && s1[n1-end-1] == s2[n2-end-1]) end++;

        return start+end >= n2;
    }
};