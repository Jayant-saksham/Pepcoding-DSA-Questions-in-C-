#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
struct node *createNode(int x) {
    struct node *ptr = new node;
    ptr->data = x;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}
int main(){
    
    return 0;
}