class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL) return 0;
        int lh=height(root->left);
        int rh=height(root->right);

        //pass through root
        int op1=lh+rh;

        //in LST
        int op2=diameterOfBinaryTree(root->left);

        // in RST
        int op3=diameterOfBinaryTree(root->right);

        return max(op1,max(op2,op3));
    }

    int height(TreeNode* root) {
        
        if(root==NULL) return 0;

        int lh=height(root->left);
        int rh=height(root->right);

        return 1+max(lh,rh);
    }
};