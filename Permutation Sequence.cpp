class Solution {
public:
    
    string getString(int n)
    {
        string s = "";
        for(int i = 1;i<=n;i++)
        {
            s += to_string(i);
        }
        return s;
    }
    
    string getPermutation(int n, int k)
    {
        string s = getString(n);
        while(--k)
        {
            next_permutation(s.begin(),s.end());
        }
        return s;
    }
};
