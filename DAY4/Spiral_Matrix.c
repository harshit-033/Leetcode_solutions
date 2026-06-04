int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {

    int col=matrixColSize[0];
    int* arr=(int*)malloc(sizeof(int)*(matrixSize*col));
    int top=0;
    int bottom=matrixSize-1;
    int left=0;
    int right=col-1;

    int count=0;
    int n=col*matrixSize;
    while(count< n){
        //left to right
        for(int i=left; i<=right && count<n; i++){
            arr[count]=matrix[top][i];
            count++;
        }

        //top to bottom
        for(int i=top+1; i<=bottom && count<n; i++){
            arr[count]=matrix[i][right];
            count++;
        }

        //right to left
        for(int i=right-1; i>=left && count<n; i--){
            arr[count]=matrix[bottom][i];
            count++;

        }

        //bottom to top-1
        for(int i=bottom-1; i>=top+1 && count<n; i--){
            arr[count]=matrix[i][left];
            count++;

        }
        top++;
        left++;
        right--;
        bottom--;

    }
    *returnSize=n;
    return arr;

}

