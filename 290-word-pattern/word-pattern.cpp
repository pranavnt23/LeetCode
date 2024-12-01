class Solution {
public:
    bool wordPattern(string pattern, string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        unordered_map<char,string>hmap;
        unordered_map<string,char>rhmap;bool res;
        vector<string> str;
        stringstream ss(s);string word;
        while(ss>>word){str.push_back(word);}
        if(pattern.size()!=str.size()){return false;}
        for(int i=0;i<pattern.size();i++){
            //char to string
            if(hmap.find(pattern[i])==hmap.end()){
                hmap[pattern[i]]=str[i]; 
            }
            else if(hmap[pattern[i]]!=str[i]){
                    return false;
            }

            //reverse mapping (string to char)
            if(rhmap.find(str[i])==rhmap.end()){
                rhmap[str[i]]=pattern[i]; 
            }
            else if(rhmap[str[i]]!=pattern[i]){
                    return false;
            }
        }
        return true;
    }
};