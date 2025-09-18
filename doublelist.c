#include <stdio.h>
#include <stdlib.h> 

struct node{
    int data;
    struct node *next,*prev;
}*head=0,*temp,*newnode,*tail;

/*prototype declere*/
void create();
int count();
void display();
void insfirst();
void inslast();
void insspe();
void delfirst();
void dellast();
void delspe();

int main(){

    create();
    display();
    printf("\n\nNo of nodes: %d",count());
    // insspe();
    // insfirst();
    // delfirst();
    // display();
    // dellast();
    delspe();
    display();
    // inslast();
    // display();

    return 0;
}
void create(){
    int opt=1;
    while(opt){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;

        if(head==0){
            temp=head=newnode;
        }
        else{
            temp->next=tail=newnode;
            newnode->prev=temp;
            temp=temp->next;
            // newnode->next=head;
            // head->prev=newnode;
        }
        printf("0 for exit, other for again ");
        scanf("%d",&opt);
    }
}
void display(){
    temp=head;
    while(temp){
        // temp=temp->prev;
        printf(" %d ",temp->data);
        // if(temp==head){
        //     break;
        // }
        temp=temp->next;
    }
}
int count(){
    int c=0;
    temp=head;
    while(temp){
        c++;
        temp=temp->next;
    }
    return c;
}
void insfirst(){
    int opt=1;
    while(opt){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data: ");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=head;
        head=newnode;

        printf("0 for exit, other for again ");
        scanf("%d",&opt);
    }
}
void inslast(){
    int opt=1;
    while(opt){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
        
        printf("0 for exit, other for again ");
        scanf("%d",&opt);
    }
}
void insspe(){
    int opt=1;
    int pos,i=2;
    while(opt){
        printf("Enter position: ");
        scanf("%d",&pos);
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data: ");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
        
        printf("0 for exit, other for again ");
        scanf("%d",&opt);
    }
    // printf("spe: %d",temp->data);
    
}
void delfirst(){
    int opt=1;
    while(opt){
        temp=head;
        head=head->next;
        free(temp);
        temp=head;
        
        printf("0 for exit, other for again ");
        scanf("%d",&opt);
    }
}
void dellast(){
    int opt=1;
    while(opt){
        temp=tail;
        tail=tail->prev;
        tail->next=0;
        free(temp);
        temp=head;
        
        printf("0 for exit, other for again ");
        scanf("%d",&opt);
    }
}
void delspe(){
    int opt=1;
    int pos,i=1;
    while(opt){
        printf("Enter position: ");
        scanf("%d",&pos);
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);

        printf("0 for exit, other for again ");
        scanf("%d",&opt);
    }
    
}
