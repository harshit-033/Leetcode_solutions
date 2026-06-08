bool isAnagram(char* s, char* t) {
    int len1=strlen(s);
    int len2=strlen(t);
    if (len1!=len2){
        return false;
    }
    int hass_s[257];
    int hass_s2[257];
    for(int i=0; i<len1; i++){
        hass_s[s[i]]+=1;
        hass_s2[t[i]]+=1;
    }
    int count=0;
    for(int i=0;i<257;i++){
        if(hass_s[i]!=hass_s2[i]){
            count+=1;
        }
    }
    if(count!=0){
        return false;
    }
    return true;



}