#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node *head;
struct node *tail;
void removeLast(){
    if(head==NULL){
        return; 
    }
    else if(head->next==NULL){
        delete head;
        return;
    }
    else{
        struct node *second_last = head;
        while(second_last->next->next!=NULL){
            second_last=second_last->next;
        }
        delete second_last->next;
        second_last->next=NULL;
    }
}
int main(){
    
    return 0;
}