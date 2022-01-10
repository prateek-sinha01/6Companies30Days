//Problem link : https://practice.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter1322/1/#

//Date : 10/01/2022
//Time Complexity: O(N)
//Auxiliary Space: O(N)
    
class Solution{
public:
    long long countWays(int m)
    {
        int dp[m+1]={0};
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2;i<=m;i++)
            dp[i] = dp[i-2] + 1;
        return dp[m];
    }
};
