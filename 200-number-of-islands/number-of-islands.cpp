class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);

        set<pair<int,int>> visited;
        vector<pair<int,int>> directions={{0,-1},{0,1},{-1,0},{1,0}};
        int row=grid.size(),col=grid[0].size();
        int island=0;

        auto bfs = [&](int r, int c) {
            queue<pair<int,int>> bfqueue;
            visited.insert({r,c});
            bfqueue.push({r,c});

            while(!bfqueue.empty()){
                auto [r,c] =bfqueue.front();bfqueue.pop();
                for(auto [dr,dc]:directions){
                    int nr=r+dr,nc=c+dc;
                    if ((nr >= 0 && nr < row) && (nc >= 0 && nc < col) &&
                        grid[nr][nc] == '1' &&
                        visited.find({nr, nc}) == visited.end()){
                            bfqueue.push({nr,nc});
                            visited.insert({nr,nc});
                    }
                }
            }
        };

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'&& visited.find({i,j})==visited.end()){
                    bfs(i,j);
                    island++;
                }
            }
        }
        return island;
    }
};