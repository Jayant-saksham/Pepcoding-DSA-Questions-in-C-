#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node *head;
struct node * remove_first() {
    if(head==NULL){
        return NULL;
    }
    struct node *ptr = head;
    head=head->next;
    delete ptr;
    return head; 
}
int main(){
    
    return 0;
}