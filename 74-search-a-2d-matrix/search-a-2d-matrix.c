bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int row=0,i;
    while(row < matrixSize && matrix[row][0] <= target){
        if(target == matrix[row][0]){ return true; }
        row++;
    }
    if(row>0){ row--; }
    else{ return false; }
    for(i=1;i<*matrixColSize;i++){
            if(matrix[row][i]==target)
                return true;
        }
        return false;
}