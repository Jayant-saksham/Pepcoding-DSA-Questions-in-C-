#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
bool find(struct node *root, int data) {
    if(root == NULL) {
        return false;
    }
    bool fis = false;
    if(root->data == data) {
        return true;
    }
    bool filc = find(root->left, data);
    if(filc) {
        return true;
    }
    bool firc = find(root->right, data);
    if(firc) {
        return true;
    }
    return false;
}
vector<int> path;
bool findNodePath(struct node *root, int data) {
    if(root == NULL) {
        return false;
    }
    if(root->data == data) {
        path.push_back(root->data);
        return true;
    }
    bool filc = find(root->left, data);
    if(filc) {
        path.push_back(root->data);
        return true;
    }
    bool firc = find(root->right, data);
    if(firc) {
        path.push_back(root->data);
        return true;
    }
    return false;
}
int main(){
    
    return 0;
}