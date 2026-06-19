class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;

        vector<int> ans;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(dq.empty()){
                dq.push_back(i);
            }
            else{
                while(!dq.empty() && (nums[dq.back()]<nums[i] || dq.back()<=(i-k))){
                    dq.pop_back();
                }

                dq.push_back(i);


            }
            while(dq.front()<j){
                dq.pop_front();
            }

            if(i>=(k-1)){
                ans.push_back(nums[dq.front()]);
                j++;

            }

        }

        return ans;




    }
};