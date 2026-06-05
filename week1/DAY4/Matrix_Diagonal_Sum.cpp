class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=mat.size();
        int sum=0;
        for(int i=0;i<s;i++){
            sum=sum+mat[i][i]+mat[i][s-1-i];
            if(i==s-1-i){
                sum=sum-mat[i][s-1-i];
            }
        }
        return sum;

    }
};