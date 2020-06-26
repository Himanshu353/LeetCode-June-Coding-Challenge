/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum = 0;
    void myFxn(TreeNode* root,string x)
    {
        if(!root)
        {
            return;
        }
        if(root->left == NULL && root->right == NULL)
        {
            x = x + to_string(root->val);
            sum += stoi(x);
            return;
        }
        myFxn(root->left,x+to_string(root->val));
        myFxn(root->right,x+to_string(root->val));
    }
    
    int sumNumbers(TreeNode* root)
    {
        string x = "";
        if(!root)
        {
            return 0;
        }
        myFxn(root,x);
        return sum;
    }
};
