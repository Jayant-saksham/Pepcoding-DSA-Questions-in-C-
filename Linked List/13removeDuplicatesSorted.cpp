#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
struct node *createNode(int x) {
  struct node *ptr;
  ptr = (struct node *)malloc(sizeof(struct node));
  ptr->data = x;
  ptr->next = NULL;
  return ptr;
}
struct node *removeDuplicates() {
    struct node *current = head;
    struct node *next_next = NULL;
    if(current==NULL) {
      return NULL;
    }
    while(current->next!=NULL) {
      if(current->data == current->next->data) {
        next_next = current->next->next;
        free(current->next);
        current->next = next_next;
      }
      else {
        current = current->next;
      }
    }
    return current;
}
int main(){
    
    return 0;
}