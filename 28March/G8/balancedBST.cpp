class Solution {
public:
    bool isBalanced(TreeNode* root) {
        
        bool ans=isbal(root).second;

        return ans;
    }

    pair<int,bool> isbal(TreeNode* root){
        if(!root){
            return {0,true};
        }
        pair<int,bool> lp=isbal(root->left),rp=isbal(root->right);

        int height=1+max(lp.first,rp.first);

        if(abs(lp.first-rp.first)<=1 && lp.second && rp.second){
            return {height,true};
        }

        return {height,false};
    }
};