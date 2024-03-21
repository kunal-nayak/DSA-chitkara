#include <stdio.h>

//////////LEVEL ORDER TRAVERSAL

void levelOrder(Node* root){
    
    queue<Node*> q;
    
    q.push(root);
    while(!q.empty()){
        Node* f=q.front();
        q.pop();
        
        cout<<f->data<<" ";
        if(f->left!=NULL) q.push(f->left);
        if(f->right!=NULL) q.push(f->right);
    }
    
}

int main()
{
    

    return 0;
}
