#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
void prepostintOrder(struct node *root) {
    if(root == NULL) {
        return;
    }
    stack<pair<struct node *, int>> s;
    vector<int> pre;
    vector<int> in;
    vector<int> post;
    s.push(make_pair(root, 1));
    while(!s.empty()) {
        pair<struct node *, int> p = s.top();
        if(p.second == 1) {
            pre.push_back(p.first->data);
            p.second++;
            if(p.first->left!=NULL) {
                pair<struct node *, int> temp;
                s.push(make_pair(p.first->left, 1));
            }
        }
        else if(p.second == 2) {
            in.push_back(p.first->data);
            p.second++;
            if(p.first->right!=NULL) {
                pair<struct node *, int> temp;
                s.push(make_pair(p.first->right, 1));
            }
        }
        else {
            post.push_back(p.first->data);
            s.pop();
        }
    }
    for(auto i : pre) {
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i : in) {
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i : post) {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    
    return 0;
}