class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int length=nums.size();
        unordered_set<int> hass_m;
        for(int i=0;i<length;i++){
            if(hass_m.count(nums[i])==1){
                return true;
            }
            hass_m.insert(nums[i]);
        }
        return false;

    }
};