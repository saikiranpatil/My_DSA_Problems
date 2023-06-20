class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> dp = triangle[n-1];
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                dp[j] = triangle[i][j] + min(dp[j+1], dp[j]);
            }
        }
        return dp[0];
    }
};