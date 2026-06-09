
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n=s.size(),m=p.size();

        if(m>n) return ans;

        vector<int> f1(26,0),f2(26,0);

        for(int i=0;i<m;i++){
            f1[p[i]-'a']++;
            f2[s[i]-'a']++;
        }

        if(f1==f2) ans.push_back(0);

        for(int i=m;i<n;i++){
            f2[s[i]-'a']++;
            f2[s[i-m]-'a']--;

            if(f1==f2) ans.push_back(i-m+1);
        }

        return ans;
    }
};