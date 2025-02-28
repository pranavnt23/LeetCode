class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            unordered_map<char,int> hmap;
            for(int j=0;j<board[0].size();j++){
                char ele=board[i][j];
                if(ele!='.') hmap[ele]++;
                if(hmap[ele]>1) return false;
            }
        }
        for(int i=0;i<board.size();i++){
            unordered_map<char,int> hmap;
            for(int j=0;j<board[0].size();j++){
                char ele=board[j][i];
                if(ele!='.') hmap[ele]++;
                if(hmap[ele]>1) return false;
            }
        }
        for(int row = 0; row < 9; row += 3) {
            for(int col = 0; col < 9; col += 3) {
                unordered_map<char, int> hmap;
                for(int i = 0; i < 3; i++) {
                    for(int j = 0; j < 3; j++) {
                        char ele = board[row + i][col + j];
                        if(ele != '.') {
                            hmap[ele]++;
                            if(hmap[ele] > 1) return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};