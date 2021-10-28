#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
void kthLevel(struct node *root, int k) {
    if(k==0) {
        cout<<root->data<<" ";
    }
    if(root==NULL || k<0) {
        return;
    }
    kthLevel(root->left, k-1);
    kthLevel(root->right, k-1);
}
int main(){
    
    return 0;
}