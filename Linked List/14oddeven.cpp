#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
bool isOdd(int x) {
    if(x&1) {
        return true;
    }
    return false;
}
struct node *createNode(int x) {
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    return ptr;
}

struct node *oddEven() {
    if(head == NULL) {
        return NULL;
    }
    struct node *evenHead = NULL;
    struct node *evenTail = NULL;
    struct node *oddHead = NULL;
    struct node *oddTail = NULL;
    struct node *ptr = head;
    while(ptr!=NULL) {
        if(isOdd(ptr->data)) {
            struct node *temp = createNode(ptr->data);
            if(oddHead == NULL) {
                oddHead = temp;
                oddTail = temp;
            }
            else {
                oddTail->next = temp;
                oddTail = temp;
            }
        }
        else {
            struct node *temp = createNode(ptr->data);
            if(evenHead == NULL) {
                evenHead = temp;
                evenTail = temp;
            }
            else {
                evenTail->next = temp;
                evenTail = temp;
            }
        }
        ptr = ptr->next;
    }
    if(evenHead!=NULL) {
        head = evenHead;
        evenTail->next = oddHead;
    }
    else {
        head = oddHead;
    }
    if(oddTail!=NULL) {
        oddTail->next = NULL;
    }
    return head;
}
int main(){
    
    return 0;
}