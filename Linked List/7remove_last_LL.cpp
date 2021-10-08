#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node *head;
struct node *tail;
void deleteLast() {
    struct node *ptr = head;
    while(ptr->next->next!=NULL) {
        ptr = ptr->next;
    }
    tail = ptr;
    ptr = ptr->next;
    tail->next = NULL;
    free(ptr);
}
int main(){
    
    return 0;
}