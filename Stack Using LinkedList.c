//stack follows the principle of first in and last out // or the last in first out.
// the element which is last inserted, that is the element which is going to deleted if we pop().

#include<stdio.h>
struct node{
    int info;
    struct node *next;
};

struct node *start;

void push(*struct node *start){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("\nMemory Error\n");
    }
    int data;
    printf("\nEnter a number to insert into the stack:");
    scanf("%d",&data);
    temp->info=data;
    if(start==NULL)
        start=temp;
    else
    {
        struct node *t=start;
        temp->next=start;
        start=temp;
    }
}

void pop(struct node *start){
    struct n
}

int main(){
    struct node *start=NULL;
    start=createNode(start);
    push(start); // push is an another name of insertion in stack
    push(start);
    pop(start); // pop is delete.
}
