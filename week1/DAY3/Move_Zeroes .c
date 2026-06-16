void moveZeroes(int* nums, int numsSize) {
    int arr[numsSize];
    int i=0;
    int j=numsSize-1;
    if(numsSize==1 || numsSize==0){
        return;
    }
    for (int k=0;k<numsSize;k++){
        if(nums[k]==0){
            arr[j]=0;
            j--;
        }
        else{
            arr[i]=nums[k];
            i++;
        }
    }
    for(int i=0;i<numsSize;i++){
        nums[i]=arr[i];
    }
}
