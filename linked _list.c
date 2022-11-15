#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
    };
void main(){
    struct node *head,*newnode,*temp;
    head=NULL;
    int i,n,pos,j=1;
    printf("enter the no of node :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the data :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }else{
        temp->next=newnode;
        temp=newnode;
    }
    }
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\nenter the node at beg ");
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the data :");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
        
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    temp=head;
    printf("\nenter the node at end ");
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the data :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=newnode;
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\nenter the node at the given position :");
    printf("\n enter the position :");
    scanf("%d",&pos);
    temp=head;
    while(j<pos){
        temp=temp->next;
        j++;
        
    }
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
    
    

