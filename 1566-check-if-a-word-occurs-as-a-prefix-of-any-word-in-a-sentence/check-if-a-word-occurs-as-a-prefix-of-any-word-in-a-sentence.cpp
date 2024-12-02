class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        stringstream ss(sentence);
        string word;int ind=1;
        //vector<string> words;
        while(ss>>word){
            //words.push_back(word);
            if(word.find(searchWord)==0){
                return ind;
            }
            ind++;
        }
        return -1;
        /*struct trienode{
            int idx;
            unordered_map<char,triennode*> child;
        };
        for(int i=0;i<words.size();i++){

        }*/
    }
};