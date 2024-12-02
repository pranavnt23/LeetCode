class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        
        struct trienode{
            int idx;
            unordered_map<char,trienode*> child;
            trienode():idx(-1){}
        };

        stringstream ss(sentence);vector<string> words;
        string word;int ind=1;
        trienode* root=new trienode();
    
        auto insert=[](trienode* root,string word,int index){
            trienode* current=root;
            for(char c:word){
                if(!current->child.count(c)){
                    current->child[c]=new trienode();
                }
                current=current->child[c];
                if(current->idx==-1){current->idx=index;}
            }
        };
        auto searchIdx=[](trienode* root,string searchWord){
            trienode* current=root;
            for(char s:searchWord){
                if(!current->child.count(s)) return -1;
                current=current->child[s]; 
            }
            return current->idx;
        };

        while(ss>>word){
            insert(root,word,ind++);
        }
        return searchIdx(root,searchWord);
    }
};