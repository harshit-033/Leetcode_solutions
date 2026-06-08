class Solution {
public:
    int firstUniqChar(string s) {
        int ind=-1;
        unordered_map<char,int> mp;
        int len=s.size();
        for(int i=0;i<len;i++){
            mp[s[i]]+=1;
        }

        for(int i=0;i<len;i++){
            if(mp[s[i]]==1){
                return ind=i;
            }
        }


        return ind;

    }
};