class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int freshCount=0;
        queue<pair<int,int>> q;
        vector<pair<int,int>> directions={{0,1},{0,-1},{1,0},{-1,0}};
        int row=grid.size(),col=grid[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==2) q.push({i,j});
                else if(grid[i][j]==1) freshCount++;
            }
        }

        if(freshCount==0) return 0;

        int minutes=-1;
        while(!q.empty()){
            int sz=q.size();
            for(int k=0;k<sz;k++){
                auto [r,c]=q.front(); q.pop();
                for(auto [dr,dc]:directions){
                    int nr=r+dr, nc=c+dc;
                    if(nr>=0 && nr<row && nc>=0 && nc<col && grid[nr][nc]==1){
                        grid[nr][nc]=2;
                        freshCount--;
                        q.push({nr,nc});
                    }
                }
            }
            minutes++;
        }
        return freshCount==0 ? minutes : -1;
    }
};