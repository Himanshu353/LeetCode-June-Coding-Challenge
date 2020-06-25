class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int i,x,hash[100000] = {0};
        for(i = 0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        for(i = 0;i<100000;i++)
        {
            if(hash[i] > 1)
            {
                x = i;
            }
        }
        return x;
    }
};
