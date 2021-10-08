#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
void levelOrder(struct node *root) {
    if(root == NULL) {
        return;
    }
    queue<struct node *>q;
    q.push(root);
    while(!q.empty()) {
        struct node *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(root->left!=NULL) {
            q.push(root->left);
        }
        if(root->right!=NULL) {
            q.push(root->right);
        }
    }
}
int main(){
    
    return 0;
}