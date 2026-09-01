class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        set<pair<int,int>> visited;
        int maxArea=0;
        int row=grid.size(),col=grid[0].size();
        vector<pair<int,int>> directions={{0,-1},{0,1},{1,0},{-1,0}};

        auto bfs=[&](int i,int j){
            queue<pair<int,int>> bfsq;
            bfsq.push({i,j});
            visited.insert({i,j});
            int area=1;
            while(!bfsq.empty()){
                auto [r,c]=bfsq.front();bfsq.pop();
                for (auto [rr,cc]:directions){
                    int nr=r+rr,nc=c+cc;
                    if((nr>=0 && nr<row) && (nc>=0 && nc<col) && 
                    visited.find({nr,nc})==visited.end() && grid[nr][nc]==1){
                        area++;
                        bfsq.push({nr,nc});
                        visited.insert({nr,nc});
                    }
                }
            }
            maxArea=max(maxArea,area);
        };

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1 && visited.find({i,j})==visited.end()){
                    bfs(i,j);
                }
            }
        }
        return maxArea;   
    }
};