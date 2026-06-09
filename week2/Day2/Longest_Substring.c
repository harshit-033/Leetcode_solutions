int lengthOfLongestSubstring(char* s) {
    int arr[256]={0};
    int len=strlen(s);

    int start=0;
    int max=0;

    for (int i=0;i<len;i++) {
        if (arr[s[i]]>start) {
            start=arr[s[i]];
        }

        int current=i-start+1;
        if (current>max){
            max=current;
        }

        arr[s[i]]=i+1;
    }

    return max;
}