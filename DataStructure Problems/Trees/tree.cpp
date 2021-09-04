#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);

}

void postorder(node* root){
    if(root==NULL){
        return;
    }
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";

}

int main(){
    node* root=new node(1);
    // int val;
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    // cout<<root->data;
    // cout<<root->left->data;
    // cout<<root->right->data;
    preorder(root);
    return 0;
}