#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node *head;
struct node *addFirst(int x){
    if(head==NULL){
        return NULL;
    }
    struct node *temp = new node;
    temp->data=x;
    temp->next=head;
    head=temp;
    return head;
}
int main(){
    
    return 0;
}