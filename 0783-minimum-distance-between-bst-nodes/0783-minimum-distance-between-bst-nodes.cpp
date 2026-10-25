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
 void minDist(TreeNode * root, int &prev, int & curr){
    if(!root) return;
    minDist(root->left, prev,curr);
    if(prev!=INT_MIN)
    curr=min(curr,root->val-prev);
    prev=root->val;
    minDist(root->right, prev,curr);
 }
    int minDiffInBST(TreeNode* root) {
        int prev=INT_MIN;
        int curr=INT_MAX;
        minDist(root,prev, curr);
        return curr;
    }
};