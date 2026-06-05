

char* longestCommonPrefix(char** strs, int strsSize) {

    int len=strlen(strs[0]);
    char *ans=strs[0];

    for(int i=1;i<strsSize;i++) {
        int j=0;

        while(ans[j] && strs[i][j] && ans[j]==strs[i][j]) {
            j++;
        }

        ans[j]='\0';
    }

    return ans;
}