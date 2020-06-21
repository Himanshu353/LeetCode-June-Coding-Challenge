class Solution {
    public int calculateMinimumHP(int[][] dungeon)
    {
        int dp[][] = new int[dungeon.length][dungeon[0].length];
        int m = dungeon.length, n = dungeon[0].length;
        dp[m-1][n-1] = dungeon[m-1][n-1] > 0? 1:Math.abs(dungeon[m-1][n-1]) + 1;
        for (int i = m-2; i >= 0; i--)
        {
            dp[i][n-1] = Math.max(dp[i+1][n-1] - dungeon[i][n-1], 1);
        }
        for (int j = n-2; j >= 0; j--)
        {
            dp[m-1][j] = Math.max(dp[m-1][j+1] - dungeon[m-1][j], 1);
        }
        for (int i=m-2; i>=0; i--) 
        { 
            for (int j=n-2; j>=0; j--) 
            { 
                int ep = Math.min(dp[i+1][j], dp[i][j+1]); 
                dp[i][j] = Math.max(ep - dungeon[i][j], 1); 
            }
         }    
         return dp[0][0];         
    }
}
