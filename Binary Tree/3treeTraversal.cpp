#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
void preOrder(struct node *root) {
    if(root == NULL) {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(struct node *root) {
    if(root == NULL) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void inOrder(struct node *root) {
    if(root == NULL) {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main(){
    
    return 0;
}