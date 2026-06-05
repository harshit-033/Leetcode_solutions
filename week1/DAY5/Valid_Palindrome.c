bool isPalindrome(char* s) {


    int j=strlen(s)-1;
    int count=0;
    int i=0;
    while(i<j){
        if ((s[i]<65 || s[i]>90) && (s[i]<97 || s[i]>122) &&(s[i]<48 || s[i]>57)){
            i++;
            continue;
        }
        if ((s[j]<65 || s[j]>90) && (s[j]<97 || s[j]>122)&&(s[j]<48 || s[j]>57)){
            j--;
            continue;
        }
        s[i]=tolower(s[i]);
        s[j]=tolower(s[j]);
        if(s[i]!=s[j]){
            count++;
            break;
        }
        i++;
        j--;
    }

    if(count==0){
        return true;
    }
    else{
        return false;

    }
}