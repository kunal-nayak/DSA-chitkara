#include <stdio.h>
#include <bits/stdc++.h>

class Node{
  public:
    int data;
    Node* left,*right;
    
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

Node* buildBST(){
    
    Node* root;
    int val;
    
    cin>>val;
    while(val!=-1){
        root=insertInBst(root,val);
    }
    return root;
}

Node* insertInBst(Node* root,int val){
    if(!root){
        Node* nnode=new Node(val);
        return nnode;
    }
    if(val<root->data){
        root->left=insertInBst(root->left,val);
        
    }
    else{
        root->right=insertInBst(root->right,val);
    }
    
    return root;
}


int main()
{
    return 0;
}
