#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node *head;
struct node *addAtIndex(int x, int index){
    if(head==NULL){
        return NULL;
    }
    if(index==0){
        struct node *temp=new node;
        temp->data=x;
        temp->next=head;
        head=temp;
        return head;
    }
    else{
        struct node *ptr=head;
        for(int i=0;i<index-1 && ptr!=NULL;i++){
            ptr=ptr->next;
        }
        struct node *temp=new node;
        temp->data=x;
        temp->next=ptr->next;
        ptr->next=temp;
        return temp;
    }

    return NULL;
} 
int main(){
    
    return 0;
}