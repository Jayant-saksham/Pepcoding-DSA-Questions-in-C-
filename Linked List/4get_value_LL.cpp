#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node *head;
struct node *tail;
int getFirst(){
    if(head==NULL){
        return -1;
    }
    int x = head->data;
    return x;    
}
int getLast(){
    if(head==NULL){
        return -1;
    }
    int x = tail->data;
    return x;

}
int getAt(int index){
    if(head==NULL){
        return -1;
    }
    struct node *ptr=head;
    int count = 0;
    while(ptr!=NULL){
        if(count==index){
            int x = ptr->data;
            return x;
        }
        count++;
        ptr=ptr->next;
    }
    return -1;
}
int main(){
    
    return 0;
}