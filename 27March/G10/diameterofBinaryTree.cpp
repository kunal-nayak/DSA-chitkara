class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {

            return dia(root)-1;
    }

    int dia(TreeNode* root){
        if(root==NULL) return 0;

        int op1=1+height(root->left)+height(root->right);
        int op2=dia(root->left);
        int op3=dia(root->right);


        return max(op1,max(op2,op3));
    }

    int height(TreeNode* root) {
        
        if(!root) return 0;

        int lh=height(root->left);
        int rh=height(root->right);

        return 1+max(lh,rh);
    }
};