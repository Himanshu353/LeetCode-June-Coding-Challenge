class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0,j = 0;
        while(i < s.length() && j < t.length())
        {
            if(s[i] == t[j])
            {
                i = i + 1;
            }
            j = j + 1;
        }
        if(i == s.length())
        {
            return true;
        }
        return false;
    }
};
