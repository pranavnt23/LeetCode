class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        vector<int> rc(mat.size(),0);
        vector<int> cc(mat[0].size(),0);
        unordered_map<int,pair<int,int>> hmap;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                hmap[mat[i][j]]={i,j};
            }
        }
        for(int i=0;i<arr.size();i++){
            int ele;ele=arr[i];
            auto pos=hmap[ele];int r=pos.first,c=pos.second;
            rc[r]++;cc[c]++;
            if(rc[r]==mat[0].size()){return i;}
            if(cc[c]==mat.size()){return i;}
        }
        return -1;
    }
};