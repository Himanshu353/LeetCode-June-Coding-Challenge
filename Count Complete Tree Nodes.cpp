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
    
    void myFxn(TreeNode* root,int &count)
    {
        if(!root)
        {
            return;
        }
        count++;
        myFxn(root->left,count);
        myFxn(root->right,count);
    }
    
    int countNodes(TreeNode* root)
    {
        int count = 0;
        myFxn(root,count);
        return count;
    }
};
