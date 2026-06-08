class Solution {
public:
    bool canConstruct(string ran, string mag) {
        map<char,int> mp1;


        int len=mag.size();
        int len2=ran.size();
        for(int i=0;i<len;i++){
            mp1[mag[i]]+=1;

        }

        for(int i=0;i<len2;i++){
            if(mp1.find(ran[i])!=mp1.end() && mp1[ran[i]]!=0){
                mp1[ran[i]]-=1;
            }
            else{
                return false;
            }
        }
        return true;

    }
};