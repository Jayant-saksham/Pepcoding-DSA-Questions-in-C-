#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node *head;
struct node *tail;
int size;
struct node * addLast(int val){
    if(head==NULL){
        return NULL;
    }
    struct node *temp = new node;
    temp->data=val;
    temp->next=NULL;
    if(size==0){
        head=temp;
        tail=temp;
        size++;
    }
    else{
        tail->next=temp;
        tail=temp;
        size++;
    }
    return tail;
}
int main(){
    
    return 0;
}