#include <iostream>
using namespace std;

struct node{
    int data;
    node *left,*right;
    node(int data){
        this->data=data;
        left=right=NULL;
    }
};

node * newnode(int data){
    node *newnode=new node(data);
    return newnode;
}

void preorder(node * root)
{
    if(!root)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node * root){
    if(!root)
        return;
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}
void postorder(node * root){
    if(!root)
        return;
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
}

int main(){
         node* root = newnode(1);
    root->left = newnode(12);
    root->right = newnode(9);
    root->left->left = newnode(5);
    root->left->right = newnode(6);

    cout << "Inorder traversal ";
    inorder(root);

    cout << "\nPreorder traversal ";
    preorder(root);

    cout << "\nPostorder traversal ";
    postorder(root);
}