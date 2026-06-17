class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
        }

        vector<int> ans;
        int len2=nums2.size();

        for(int i=0;i<nums1.size();i++){
            int ind=mp[nums1[i]];

            if(ind==len2-1){
                ans.push_back(-1);
            }
            else{
                for(int j=ind;j<len2;j++){
                    if(nums2[j]>nums1[i]){
                        ans.push_back(nums2[j]);
                        break;
                    }
                    if(j==len2-1){
                        ans.push_back(-1);
                    }
                }
            }

           
        }

        return ans;
        
    }
};