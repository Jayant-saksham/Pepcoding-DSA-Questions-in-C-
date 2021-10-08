#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
void reverseLL() {
    struct node *current = head;
    struct node *prev = NULL;
    struct node *nxt = NULL;
    struct node *temp = head;
    while(current!=NULL) {
        nxt = current->next;
        current->next = prev;
        prev = current;
        current = nxt;
    }
    head = prev;
    tail = temp;
}
int main(){
    
    return 0;
}