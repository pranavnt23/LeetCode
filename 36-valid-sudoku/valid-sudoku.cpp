class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        for(int i=0;i<9;i++){
            unordered_map<char,int> hmap;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.') hmap[board[i][j]]++;
                if(hmap[board[i][j]]>1) return false;
            }
        }
        for(int i=0;i<9;i++){
            unordered_map<char,int> hmap;
            for(int j=0;j<9;j++){
                if(board[j][i]!='.') hmap[board[j][i]]++;
                if(hmap[board[j][i]]>1) return false;
            }
        }
        for(int row=0;row<9;row+=3){
            for(int col=0;col<9;col+=3){
                unordered_map<char,int> hmap;
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        if(board[row+i][col+j]!='.') hmap[board[row+i][col+j]]++;
                        if(hmap[board[row+i][col+j]]>1) return false;
                    }
                }
            }
        }
        return true;
    }
};