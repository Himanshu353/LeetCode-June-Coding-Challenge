class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        long ans=0;
        int p=0;
        for(int j=0;j<32;j++)
        {
            int count=0;
            for(int i=0;i<nums.size();i++)
            {
                int x=nums[i]&1;
                count=count+x;
                nums[i]=nums[i]>>1;
            }
            count=count%3;
            ans=ans+count*pow(2,p);
            p++;
        }
        return ans;
    }
};
