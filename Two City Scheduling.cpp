class Solution {
public:
    static bool comp(vector<int> a, vector<int> b)
    {
        return abs(a[0] - a[1]) > abs(b[0] - b[1]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs)
    {
        int n = costs.size();
        int x = n/2, y = n/2;
        sort(costs.begin(),costs.end(),comp);
        int res = 0,i;
        for(i=0;i<n;i++)
        {
            if(y == 0 || (costs[i][0] < costs[i][1] && x > 0))
            {
                x--;
                res += costs[i][0];
            }
            else
            {
                y--;
                res += costs[i][1];
            }
        }
        return res;
    }
};
