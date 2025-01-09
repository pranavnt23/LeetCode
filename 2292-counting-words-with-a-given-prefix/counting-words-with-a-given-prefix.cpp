class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        Trie trie;
        for(string word:words){
            trie.addwrd(word);
        }
        return trie.cntPref(pref);
    }
private:
    class Trie{
        struct Node{
            vector<Node*> lk;
            int cnt;
            
            Node():lk(26,nullptr),cnt(0){}
        };

        Node* root;

        public:
        Trie(){root=new Node();}

        void addwrd(string wrd){
            Node* curr=root;
            for(char c:wrd){
                if(curr->lk[c-'a']==nullptr){
                    curr->lk[c-'a']=new Node();
                }
                curr=curr->lk[c-'a'];
                curr->cnt++;
            }
        }
        int cntPref(string pref){
            Node* curr=root;
            for(char c:pref){
                if(curr->lk[c-'a']==nullptr){return 0;}
                curr=curr->lk[c-'a'];
            }
            return curr->cnt;
        }
    };
};