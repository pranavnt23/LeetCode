class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        string res="123450";
    set<string> preset;queue<string> curque;string num="";
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            num+=to_string(board[i][j]);
        }
    }
    
    vector<vector<int>> direc={
        {1,3},
        {0,2,4},
        {1,5},
        {0,4},
        {1,3,5},
        {2,4}
    };
    
    curque.push(num);preset.insert(num);
    int moves=0;
    while(!curque.empty()){
        int sz=curque.size();
        for(int i=0;i<sz;i++){
            string cur=curque.front();
            curque.pop();
            
            if(cur==res){return moves;}
            
            int zroind=cur.find('0');
            for(auto &dir:direc[zroind]){
                string nxt=cur;
                swap(nxt[zroind],nxt[dir]);                
                if(preset.find(nxt)==preset.end()){
                    curque.push(nxt);
                    preset.insert(nxt);
                }
            }
        }    
        moves++;
    }
    return -1;
    }
};