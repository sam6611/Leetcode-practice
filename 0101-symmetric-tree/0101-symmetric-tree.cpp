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
    bool ismirror(TreeNode* t1, TreeNode* t2){
        if(t1==NULL&& t2==NULL) return true;
        if(t1==NULL || t2==NULL) return false;
        if(t1->val!=t2->val) return false;
        return ismirror(t1->left, t2->right) && ismirror(t1->right, t2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        TreeNode* t1=root->left;
        TreeNode* t2=root->right;
        return ismirror(t1, t2);
    }
};