class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        
        string op;int cnt=0;
        for(int i=0;i<s.size();i++){
            if(cnt<spaces.size() && spaces[cnt]==i){
                op+=' ';
                cnt++;
            }
        op+=s[i];
        }
        return op;
    }
};