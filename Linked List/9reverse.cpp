#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
int length() {
    struct  node *ptr = head;
    int count = 0;
    while(ptr!=NULL) {
        count++;
        ptr = ptr->next;
    }
    return count;
}
struct node *getNodeAt(int idx) {
    struct node *ptr = head;
    for(int i=0;i<idx;i++) {
        ptr = ptr->next;
    }
    return ptr;
}
void reverse() {
    int li = 0;
    int ri = length() -1;
    while(li<ri) {
        struct node *left = getNodeAt(li);
        struct node *right = getNodeAt(ri);
        int temp = left->data;
        left->data = right->data;
        right->data = temp;
        li++;
        ri--;
    }
}
int main(){
    
    return 0;
}