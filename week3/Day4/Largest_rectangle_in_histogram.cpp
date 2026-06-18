class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> ns;
        stack<int> ps;

        int len=heights.size();
        vector<int> next(len, 1);
        vector<int> prev(len, 1);
        

        for(int i=len-1;i>=0;i--){
            while(!ns.empty() && heights[ns.top()]>=heights[i]){
                ns.pop();
            }
            next[i]=(ns.empty())?(len-i):(ns.top()-i);
            ns.push(i);            

        }

        for(int i=0;i<len;i++){
            while(!ps.empty() && heights[ps.top()]>=heights[i]){
                ps.pop();
            }
            prev[i]=(ps.empty())?(i+1):(i-ps.top());
            ps.push(i);
        }
        

        int sum=0;
        int max=0;
        for(int i=0;i<len;i++){
            sum=(heights[i]*(prev[i]-1))+(heights[i]*(next[i]));
            max=(sum>=max)?sum:max;

        }

        return max;
        
    }
};