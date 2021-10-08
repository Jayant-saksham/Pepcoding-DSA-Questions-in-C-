#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
int size(struct node *root) {
    if(root == NULL) {
        return 0;
    }
    int ls = size(root->left);
    int rs = size(root->right);
    return ls + rs + 1;
}
int sum(struct node *root) {
    if(root == NULL) {
        return 0;
    }
    int lsm = sum(root->left);
    int rsm = sum(root->right);
    return lsm + rsm + root->data;
}
int maxx(struct node *root) {
    if(root == NULL) {
        return INT16_MIN;
    }
    int lmax = maxx(root->left);
    int rmax = maxx(root->right);
    return max(lmax, max(root->data, rmax));
}
int height(struct node *root) {
    if(root == NULL) {
        return -1;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}
int main(){
    
    return 0;
}