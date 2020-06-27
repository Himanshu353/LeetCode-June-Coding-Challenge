class Solution {
public:
    int numSquares(int n)
    {
        if(sqrt(n) - floor(sqrt(n)) == 0)
        {
            return 1;
        }
        if(n<=3)
        {
            return n;
        }
        int* dp = new int[n+1];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        for(int i = 4;i<=n;i++)
        {
            dp[i] = i;
            for(int j = 1;j<=ceil(sqrt(i));j++)
            {
                int x = j*j;
                if(x > i)
                {
                    break;
                }
                else
                {
                    dp[i] = min(dp[i],1+dp[i-x]);
                }
            }
        }
        int ans = dp[n];
        delete[] dp;
        return ans;
    }
};
