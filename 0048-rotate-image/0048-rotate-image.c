void rotate(int** matrix, int r, int* co) {
    int i, j, k;
    int c = sizeof(matrix[0])/sizeof(matrix[0][0]);
    for(i =0 ;i< r;i++){
        for(j = i; j<r;j++){
            int tem = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tem;
        }
    }
    for(i =0;i<r;i++){
        for(k = 0, j = r-1; k<j ; k++,j--){
            int tem = matrix[i][k];
            matrix[i][k] = matrix[i][j];
            matrix[i][j] = tem;
        }
    }
}