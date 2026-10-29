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
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
       int leftheight=0, rightheight=0;
       TreeNode * c1=root;
       TreeNode * c2 = root;

       while(c1!=NULL){
        leftheight++;
        c1 = c1->left;
       }

       while(c2!=NULL){
        rightheight++;
        c2 = c2->right;
       }

       if(leftheight==rightheight)
       return (1<< leftheight)-1;

       return 1+countNodes(root->left)+countNodes(root->right);
    }
};