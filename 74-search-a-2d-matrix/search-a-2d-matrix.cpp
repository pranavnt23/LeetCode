class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row=mat.size(),cols=mat[0].size();
        if(row==0 || cols==0) return false;
        int left=0,right=row*cols-1;
        
        while(left<=right){
            int mid=(left+right)/2;
            int r=mid/cols,c=mid%cols;
            if(mat[r][c]==target) return true;
            else if(mat[r][c]>target) right=mid-1;
            else left=mid+1;
        }
        return false;
    }
};