int maxArea(int* height, int heightSize) {
    int left=0;
    int right=heightSize-1;
    int max=0;
    int prod;

    while(left<right){
        if(height[left]<height[right]){
            prod=height[left]*(right-left);
            left++;
        }
        else{
            prod=height[right]*(right-left);
            right--;
        }
        max=(prod>max)?prod:max;
    }

    return max;


}