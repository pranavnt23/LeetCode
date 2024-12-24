class Solution {
public:
    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        int m=edges2.size()+1,n=edges1.size()+1;
        vector<vector<int>> adL1=buildAdj(n,edges1);
        vector<vector<int>> adL2=buildAdj(m,edges2);

        int dia1=findDia(n,adL1);
        int dia2=findDia(m,adL2);

        int combinedDia=ceil(dia1/2.0) + ceil(dia2/2.0)+1;

        return max({combinedDia,dia1,dia2});
    }

private:
    vector<vector<int>> buildAdj(int size,vector<vector<int>>& edges){
        vector<vector<int>> adjL(size);
        for(auto ed:edges){
            adjL[ed[0]].push_back(ed[1]);
            adjL[ed[1]].push_back(ed[0]);
        }
        return adjL;
    }
    int findDia(int n,vector<vector<int>>& adjList){
        auto [farthest,_]=findFar(n,adjList,0);

        auto [_,diameter]=findFar(n,adjList,farthest);

        return diameter;
    }
    pair<int,int> findFar(int n,vector<vector<int>>& adjList,int sorceNode){
        queue<int> nodeQue;
        vector<bool> visited(n,false);

        nodeQue.push(sorceNode);
        visited[sorceNode]=true;

        int maxDist=0,farthest=sorceNode;

        while(!nodeQue.empty()){
            int size=nodeQue.size();
            for(int i=0;i<size;i++){
                int currNode=nodeQue.front();
                nodeQue.pop();

                farthest=currNode;

                for(int neigh:adjList[currNode]){
                    if(!visited[neigh]){
                        visited[neigh]=true;
                        nodeQue.push(neigh);
                    }
                }
            }
            if(!nodeQue.empty()) maxDist++;
        }
        return {farthest,maxDist};
    }
};