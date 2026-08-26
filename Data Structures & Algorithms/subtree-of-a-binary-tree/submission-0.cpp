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
bool check(TreeNode* root, TreeNode* subroot){
    if(root==nullptr&&subroot==nullptr){
        return true;
    }
    if(root==nullptr||subroot==nullptr){
        return false;
    }

    int left=check(root->left,subroot->left);
    int right=check(root->right,subroot->right);
    if((root->val==subroot->val)&&left&&right){
        return true;
    }
    return false;
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr){
            return false;
        }
        return ((root->val==subRoot->val)&&check(root,subRoot))||isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
};
