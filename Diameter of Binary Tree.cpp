/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int depth(TreeNode* temp){
        if(temp == NULL){
            return 0;
        }
        return max(depth(temp->left), depth(temp->right)) + 1;
    }  
    
    void solve(TreeNode* A, int &res){
        if(A == NULL){
            return;
        }
        int left = depth(A->left);
        int right = depth(A->right);
        if((left + right) > res){
            res = left + right;
        }
        solve(A->left, res);
        solve(A->right, res);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int left = 0;
        int right = 0;
        int res = 0;
        if(root == NULL){
            return 0;
        }
        solve(root, res); 
        return res;
    }
};
