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
struct node *findMid() {
    struct node *slow = head;
    struct node *fast = head;
    while(fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
struct node *reverseLL(struct node *headNode) {
    struct node *current = headNode;
    struct node *prev = NULL;
    struct node * nxt = NULL;
    while(current->next!=NULL) {
        
    }

}
struct node *foldLL() {
    struct node *headptr = head;
    struct node *mid = findMid();
    struct node *newHead = mid->next;
    mid->next = NULL;
}
int main(){
    
    return 0;
}