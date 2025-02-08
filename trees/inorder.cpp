#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};// depth first search traversals 
void preorder(node* root){
    if(root==NULL) return;
     cout<<root->data;
    preorder(root->left);
    preorder(root->right);
   

}
void inorder(node* root){
    if(root==NULL) return;
    
    preorder(root->left);
    cout<<root->data;
    preorder(root->right);

    

    
}
void postorder(node* root){
    if(root==NULL) return;
    preorder(root->left);
    preorder(root->right);
    cout<<root->data;

    
}

int main(){
    node* root=new node(5);
    node* n=new node(5);
    root->left=n;
    n=new node(6);
    root->right=n;
      n=new node(7);
    root->left->left=n;
  n=new node(9);
        root->left->right=n;
        inorder( root);
        cout<<endl;
        preorder(root);
        cout<<endl;
        postorder(root);
        cout<<endl;
        system("pause");

    




}