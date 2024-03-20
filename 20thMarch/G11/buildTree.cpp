#include <bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node* left,*right;
    
    Node(int d){
        data=d;
        left=right=NULL;
    }
};

Node* buildTree(){
    int data;
    cin>>data;
    
    if(data==-1){
        return NULL;
    }
    Node* root=new Node(data);
    
    root->left=buildTree();
    root->right=buildTree();
    return root;
}

int main()
{
     
    return 0;
}
