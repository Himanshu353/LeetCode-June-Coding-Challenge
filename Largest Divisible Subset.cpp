class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums)
    {
        int n = nums.size();
        if(n<=1)
        {
            return nums;
        }        
        sort(nums.begin(),nums.end());
        vector<int> div(n,1);
        vector<int> prev(n,-1);
        int ind = 0;        
        for(int i=1;i<n;i++)
        {
            for(int j = 0;j<i;j++)
            {
                if(nums[i]%nums[j] == 0)
                {
                    if(div[i]<div[j]+1)
                    {
                        div[i] = div[j]+1;
                        prev[i] = j;
                    }
                }
            }
            if (div[ind] < div[i])
            {
                ind = i;
            }
        }    
        int index = ind;        
        vector<int> v;        
        while(index>=0)
        {
            v.push_back(nums[index]);
            index = prev[index];
        }
        return v;
    }
};
