class Solution {
public:
    long long gridGame(vector<vector<int>>& mat) {
        long long frsum=accumulate(begin(mat[0]),end(mat[0]),0LL),srsum=0;
        long long minsum=LONG_LONG_MAX;
        for(int i=0;i<mat[0].size();i++){
            frsum-=mat[0][i];
            minsum=min(minsum,max(frsum,srsum));
            srsum+=mat[1][i];
        }
        return minsum;
    }
};