class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        
        int maxArea=0;
        set<pair<int,int>> visited;
        int row=grid.size(),col=grid[0].size();

        auto bfs=[&](int r,int c){
            queue<pair<int,int>> dfqueue;
            dfqueue.push({r,c});
            visited.insert({r,c});
            vector<pair<int,int>> directions={{0,1},{0,-1},{1,0},{-1,0}};
            int area=1;

            while(!dfqueue.empty()){
                auto [rr,cc]=dfqueue.front();dfqueue.pop();
                for(auto [dr,dc]:directions){
                    int nr=dr+rr,nc=dc+cc;
                    if((nr>=0&&nr<row)&&(nc>=0&&nc<col)&&
                    grid[nr][nc]==1 && visited.find({nr,nc})==visited.end()){
                        area++;
                        dfqueue.push({nr,nc});
                        visited.insert({nr,nc});
                    }
                }
            }
            if(area>maxArea){maxArea=area;}
        };

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1&&visited.find({i,j})==visited.end()){
                    bfs(i,j);
                }
            }
        }
        return maxArea;
    }
};