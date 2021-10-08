#include<stdio.h>
#include<cstdlib>
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
void deleteFirst() {
    struct node *ptr = head;
    head = head->next;
    ptr->next = NULL;
    free(ptr);
}
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
int lengthIt() {
    int count = 0;
    struct node *ptr= head;
    while(ptr!=NULL) {
        count++;
        ptr=ptr->next;
    }
    return count;
}
void deleteAnyIndex(int idx) {
    if(idx < 0 || idx >=lengthIt()) {
        printf("Invalid Index !");
        return;
    }
    if(idx == 0) {
        deleteFirst();
    }
    else if(idx == (lengthIt() - 1)) {
        deleteLast();
    }
    else {
        struct node *r = head;
        struct node *k = NULL;
        for(int i=0;i<idx;i++) {
            k = r;
            r= r->next;
        }
        k->next = r->next;
        r->next = NULL;
        free(r);
    }
}
int main() {
    
    return 0;
}