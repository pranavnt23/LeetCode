class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        set<pair<int,int>> visited;
        int row=grid.size(),col=grid[0].size();
        vector<pair<int,int>> directions={{0,1},{0,-1},{1,0},{-1,0}};
        int island=0;

        auto bfs=[&](int i,int j){
            queue<pair<int,int>> bfs;
            bfs.push({i,j});visited.insert({i,j});

            while(!bfs.empty()){
                auto [r,c]=bfs.front();bfs.pop();
                for(auto [dr,dc]:directions){
                    int nr=r+dr,nc=c+dc;
                    if((nr>=0 && nr<row) && (nc>=0 && nc<col) &&
                    visited.find({nr,nc})==visited.end() && grid[nr][nc]=='1'){
                        visited.insert({nr,nc});
                        bfs.push({nr,nc});
                    }
                }
            }
        };

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1' && visited.find({i,j})==visited.end()){
                    bfs(i,j);
                    island++;
                }
            }
        }

        return island;
    }
};