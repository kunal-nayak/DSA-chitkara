/////COUNT NUMBER OF NODES IN A BINARY TREE


int count(Node* root){
    if(!root) return 0;
    
    int cl=count(root->left);
    int cr=count(root->right);
    
    return 1+cl+cr;
    
}