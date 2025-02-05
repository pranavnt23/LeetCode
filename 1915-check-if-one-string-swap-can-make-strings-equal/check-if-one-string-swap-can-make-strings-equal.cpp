class Solution {
public:
    bool containsChar(char c, const string& s) {
        return s.find(c) != string::npos;
    }

    bool areAlmostEqual(string s1, string s2) {
        if (s1.size() != s2.size()) return false;
        if (s1 == s2) return true;
        int first=-1,second=-1,cnt=0;
        for (int i=0;i<s1.size();i++) {
            if (s1[i]!=s2[i]) {
                cnt++;
                if (cnt>2) return false; 
                if (first==-1) first=i; 
                else second=i; 
            }
        }
        return (cnt==2 && s1[first]==s2[second] && s1[second]==s2[first]);
    }
};
