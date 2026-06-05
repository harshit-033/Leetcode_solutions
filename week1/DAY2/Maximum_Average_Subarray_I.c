double findMaxAverage(int* nums, int numsSize, int k) {

    double current = 0;
    for(int i=0;i<k;i++) {
        current+=nums[i];
    }
    double max=current/k;
    for(int i=k;i<numsSize;i++) {
        current+=nums[i];
        current-=nums[i-k];
        double avg=current/k;

        if (avg>max) {
            max=avg;
        }
    }

    return max;
}