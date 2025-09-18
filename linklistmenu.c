/*===========================================*
 |  Created by:  Sidharth Chandra             |
 |  Project:     LinkList Menu                |
 |  Start Date:  01-05-2025                   |
 |  Finish Date: 06-05-2025                   |
 |  Course:      BCA                          |
 *===========================================*/
/*..........S.............T............A...............R................T...............*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

/*globle declearation for datatype*/
struct node{
    int data;
    struct node *next;
}*head=0,*temp,*newnode;

/*globle declearation for variable*/
int count=0;

/*prototype declearation for functions*/

/*menu*/
void menu();
/*create*/
void create();
/*Edit*/
void edit();
/*print*/
void print();
/*find*/
void sum();
void even();        
void prime();
/*insert*/
void insFirst();
void insLast();
void insSpe();
/*delete*/
void delFirst();
void delLast();
void delSpe();
/*shorting*/
void reverse();
void ascending();
void descending();
/*searching*/
void bydata();
void byposition();
/*exit*/
void back();

/*main function*/
int main(){
    menu();
    return 0;
}

/*......................function definition...................*/
/*........MENU........*/
void menu(){
    int choice=1;
    while(choice){
        menu:
        system("cls");
        printf("\n\t\e[36mWELCOME TO LINKLIST\e[0m");
        printf("\n\n1. Create *new");
        printf("\n2. Edit");
        printf("\n3. Print");
        printf("\n4. Find");
        printf("\n5. Insert");
        printf("\n6. delete");
        printf("\n7. Sorting");
        printf("\n8. Searching");
        printf("\n0. EXIT");
        printf("\n\nenter your choice ");
        scanf("%d",&choice);
        printf("choice %d",choice);
        
        switch(choice){
            /*Create*/
            case 1:{
                system("cls");  //for clear screen
                create();       //function call
                getch();    //for hold screen
                break;
            }
            /*Edit*/
            case 2:{
                system("cls");
                edit();
                getch();
                break;
            }
            /*Print*/
            case 3:{
                system("cls");
                print();
                getch();
                break;
            }
            /*Find*/
            case 4:{
                find:
                system("cls");
                printf("\n1. Find sum");
                printf("\n2. Find even or odd");
                printf("\n3. Find prime or composite");
                printf("\n7. return");
                printf("\n\nenter your choice ");
                scanf("%d",&choice);

                switch(choice){
                    /*sum*/
                    case 1:{
                        system("cls");
                        sum();        //function call
                        getch();
                        goto find;
                        break;
                    }
                    /*even odd*/
                    case 2:{
                        system("cls");
                        even();        //function call
                        getch();
                        goto find;
                        break;
                    }
                    /*prime composite*/
                    case 3:{
                        system("cls");
                        prime();        //function call
                        getch();
                        goto find;
                        break;
                    }
                    /*return*/
                    case 7:{
                        goto menu;
                        break;
                    }
                    /*default*/
                    default:{
                        system("cls");
                        printf("\n\e[31mOops!...You enterd wrong choice! \e[0m");
                        getch();
                        goto find;
                        break;
                    }
                }
                break;
            }
            /*Insert*/
            case 5:{
                insert:
                system("cls");
                printf("\n1. Insert First");
                printf("\n2. Insert Last");
                printf("\n3. Insert Specific");
                printf("\n7. Return");
                printf("\n\nEnter your choice ");
                scanf("%d",&choice);

                switch(choice){
                    /*insert first*/
                    case 1:{
                        system("cls");
                        insFirst();        //function call
                        getch();
                        goto insert;
                        break;
                        /*insert last*/
                    }
                    case 2:{
                        system("cls");
                        insLast();        //function call
                        getch();
                        goto insert;
                        break;
                    }
                    /*insert specific*/
                    case 3:{
                        system("cls");
                        insSpe();        //function call
                        getch();
                        goto insert;
                        break;
                    }
                    /*return*/
                    case 7:{
                        goto menu;
                        break;
                    }
                    /*default*/
                    default:{
                        system("cls");
                        printf("\n\e[31mOops!...You enterd wrong choice! \e[0m");
                        getch();
                        goto insert;
                        break;
                    }
                }
                break;
            }
            /*Delete*/
            case 6:{
                del:
                system("cls");
                printf("\n1. Delete First");
                printf("\n2. Delete Last");
                printf("\n3. Delete Specific");
                printf("\n7. Return");
                printf("\n\nEnter your choice ");
                scanf("%d",&choice);

                switch(choice){
                    /*delete first*/
                    case 1:{
                        system("cls");
                        delFirst();        //function call
                        getch();
                        goto del;
                        break;
                    }
                    /*delete last*/
                    case 2:{
                        system("cls");
                        delLast();        //function call
                        getch();
                        goto del;
                        break;
                    }
                    /*delete specific*/
                    case 3:{
                        system("cls");
                        delSpe();        //function call
                        getch();
                        goto del;
                        break;
                    }
                    /*return*/
                    case 7:{
                        goto menu;
                        break;
                    }
                    /*default*/
                    default:{
                        system("cls");
                        printf("\n\e[31mOops!...You enterd wrong choice! \e[0m");
                        getch();
                        goto del;
                        break;
                    }
                }
                break;
            }
            /*Shorting*/
            case 7:{
                shorting:
                system("cls");
                printf("\n1. Reverse");
                printf("\n2. Ascending");
                printf("\n3. Descending");
                printf("\n7. Return");
                printf("\n\nEnter your choice ");
                scanf("%d",&choice);

                switch(choice){
                    /*reverse*/
                    case 1:{
                        system("cls");
                        reverse();        //function call
                        getch();
                        goto shorting;
                        break;
                    }
                    /*Ascending order*/
                    case 2:{
                        system("cls");
                        ascending();        //function call
                        getch();
                        goto shorting;
                        break;
                    }
                    /*Descending order*/
                    case 3:{
                        system("cls");
                        descending();        //function call
                        getch();
                        goto shorting;
                        break;
                    }
                    /*return*/
                    case 7:{
                        goto menu;
                        break;
                    }
                    /*default*/
                    default:{
                        system("cls");
                        printf("\n\e[31mOops!...You enterd wrong choice! \e[0m");
                        getch();
                        goto shorting;
                        break;
                    }
                }
                break;
            }
            /*Searching*/
            case 8:{
                searching:
                system("cls");
                printf("\n1. By Data");
                printf("\n2. By Position");
                printf("\n7. Return");
                printf("\n\nEnter your choice ");
                scanf("%d",&choice);

                switch(choice){
                    /*Ascending order*/
                    case 1:{
                        system("cls");
                        bydata();        //function call
                        getch();
                        goto searching;
                        break;
                    }
                    /*Descending order*/
                    case 2:{
                        system("cls");
                        byposition();        //function call
                        getch();
                        goto searching;
                        break;
                    }
                    /*return*/
                    case 7:{
                        goto menu;
                        break;
                    }
                    /*default*/
                    default:{
                        system("cls");
                        printf("\n\e[31mOops!...You enterd wrong choice! \e[0m");
                        getch();
                        goto searching;
                        break;
                    }
                }
                break;
            }
            /*EXIT*/
            case 0:{
                /*exit*/
                system("cls");
                //printf("\n\n\e[35m-----EXIT-----\e[0m");
                back();
                getch();
                break;
            }
            /*default*/
            default:{
                /*default*/
                system("cls");
                printf("\n\e[31mOops!...You enterd wrong choice! \e[0m");
                getch();
                break;
            }
        }
    }
}
/*............create..............*/
void create(){
    int opt=1,i=0;
    /*for free reserved momory deuring compile time*/
    if(head!=0){        
        while(head){
            temp=head;
            head=head->next;
            free(temp);
        }
    }
    count=0;
    temp=head=0;
    while(opt){
        newnode=(struct node*)malloc(sizeof(struct node));
        /*if malloc not locat any memory location*/
        if(newnode==NULL){
            printf("\n\e[31mSorry, didn't find enoough space!\n\n\e[0m");
        }
        else{
            printf("\nEnter data: ");
            scanf("%d",&newnode->data);
            newnode->next=0;
            count++;
            i=1;
            if(head==0){
                head=temp=newnode;
            }
            else{
                temp->next=newnode;
                temp=newnode;
            }
        }
        printf("press '0' for exit, 'other' for enter again ");
        scanf("%d",&opt);
    }
    if(i==1){
        printf("\n\e[32mSuccessfully created \e[0m"); //green colou
    }
    else{
        printf("\n\n\e[31mLinklist not created! \e[0m");
    }
}
/*..............Edit..............*/
void edit(){
    if(head==0){
        printf("\n\e[31mLinklist not present! \e[0m");  //red colour
    }
    else{
        int i=0,pos,opt=1;
        while(opt){
            printf("\nEnter position ");
            scanf("%d",&pos);
            if(pos<1||pos>count){
                printf("\n\e[31mInvalid position! \e[0m");  //red colour
            }
            else{
                i=1;
                temp=head;
                while(i<pos){
                    temp=temp->next;
                    i++;
                }
                pos=temp->data;
                printf("Enter new data ");
                scanf("%d",&temp->data);
                printf("\n( %d -> %d ) \e[32mEdited \e[0m",pos,temp->data);  //green colour
            }
            printf("\npress '0' for exit, 'other' for Edit again ");  
            scanf("%d",&opt);
        }
        if(i>0){
            printf("\n\e[32mSuccessfully Edited \e[0m");  ////green colour
        }
        else{
            printf("\n\e[31mNothing changed! \e[0m");  //red colour
        }
    }
}
/*............print data..........*/
void print(){
    if(head==0){
        printf("\n\e[31mNo data present! \e[0m");   //red colour
    }
    else{
        temp=head;
        printf("\nData: ");
        while(temp!=0){
            printf("\e[32m %d \e[0m",temp->data);
            temp=temp->next;
        }
        printf("\n\nTotal No of node:\e[32m %d \e[0m",count);
    }
}
/*.............Find...............*/
void sum(){
    if(head==0){
        printf("\n\e[31mNo data present! \e[0m");   //red colour
    }
    else{
        temp=head;
        int summ=0;
        while(temp!=0){
            summ+=temp->data;
            temp=temp->next;
        }
        printf("\nTotal sum: \e[32m%d \e[0m",summ);
    }
}
void even(){
    if(head==0){
        printf("\n\e[31mNo data present! \e[0m");   //red colour
    }
    else{
        temp=head;
        int evensum=0,evencount=0,oddsum=0,oddcount=0;
        printf("\nEven values are: ");
        while(temp){
            if(temp->data%2==0){
                printf("\e[32m %d \e[0m",temp->data);
                evensum+=temp->data;
                evencount++;
            }
            temp=temp->next;
        }
        printf("\n\nNo of all even:\e[32m %d \e[0m",evencount);
        printf("\nSum of all even:\e[32m %d \e[0m",evensum);
        temp=head;
        printf("\n\nOdd values are: ");
        while(temp){
            if(temp->data%2!=0){
                printf("\e[32m %d \e[0m",temp->data);
                oddcount++;
                oddsum+=temp->data;
            }
            temp=temp->next;
        }
        printf("\n\nNo of all odd:\e[32m %d \e[0m",oddcount);
        printf("\nSum of all odd:\e[32m %d \e[0m",oddsum);
    }
}
void prime(){
    if(head==0){
        printf("\n\e[31mNo data present! \e[0m");   //red colour
    }
    else{
        int i,c,psum=0,csum=0,pcount=0,ccount=0;
        temp=head;
        printf("\nprime number's: ");
        while(temp){
            c=0;
            if(temp->data==0 || temp->data==1){
                temp=temp->next;
                continue;
            }
            else{
                for(i=2; i<temp->data;i++){
                    if(temp->data%i==0){
                        c=1;
                    }
                }
                if(c==0){
                    printf("\e[32m %d \e[0m",temp->data);
                    psum+=temp->data;
                    pcount++;
                }
            }
    
            temp=temp->next;
        }
        printf("\n\nNo of all prime:\e[32m %d \e[0m",pcount);
        printf("\nSum of all prime:\e[32m %d \e[0m",psum);
    
        temp=head;
        printf("\n\nComposite number's: ");
        while(temp){
            c=0;
            if(temp->data==0 || temp->data==1){
                printf("\e[32m %d \e[0m",temp->data);
                csum+=temp->data;
                ccount++;
                temp=temp->next;
                continue;
            }
            else{
                for(i=2; i<temp->data;i++){
                    if(temp->data%i==0){
                        c=1;
                    }
                }
                if(c==1){
                    printf("\e[32m %d \e[0m",temp->data);
                    csum+=temp->data;
                    ccount++;
                }
            }
            temp=temp->next;
        }
        printf("\n\nNo of all composite:\e[32m %d \e[0m",ccount);
        printf("\nSum of all composite:\e[32m %d \e[0m",csum);
    }
}
/*.............Insert.............*/
void insFirst(){
    if(head==0){
        printf("\n\e[31mLinklist not present! \e[0m");  //red colour
    }
    else{
        int opt=1,i=0;
        while(opt){
            newnode=(struct node*)malloc(sizeof(struct node));
            /*if malloc not locat any memory location*/
            if(newnode==NULL){
                printf("\n\e[31mSorry, didn't find enoough space!\n\n\e[0m");
            }
            else{
                printf("\nEnter data: ");
                scanf("%d",&newnode->data);
                newnode->next=head;
                head=newnode;
                count++;
                i=1;
            }
            printf("press '0' for exit, 'other' for Insert again ");
            scanf("%d",&opt);
        }
        if(i==1){
            printf("\n\e[32mSuccessfully inserted \e[0m");  ////green colour
        }
        else{
            printf("\n\e[31mNot inserted in Linklist! \e[0m");  ////green colour
        }
    }
}
void insLast(){
    if(head==0){
        printf("\n\e[31mLinklist not present! \e[0m");  //red colour
    }
    else{
        temp=head;
        int opt=1,i=0;
        while(temp->next!=0){
            temp=temp->next;
        }
        while(opt){
            newnode=(struct node*)malloc(sizeof(struct node));
            /*if malloc not locat any memory location*/
            if(newnode==NULL){
                printf("\n\e[31mSorry, didn't find enoough space!\n\n\e[0m");
            }
            else{
                printf("\nEnter data: ");
                scanf("%d",&newnode->data);
                newnode->next=0;
                temp->next=newnode;
                temp=temp->next;
                count++;
                i=1;
            }

            printf("press '0' for exit, 'other' for Insert again ");  
            scanf("%d",&opt);
        }
        if(i==1){
            printf("\n\e[32mSuccessfully inserted \e[0m");  ////green colour
        }
        else{
            printf("\n\e[31mNot inserted in Linklist! \e[0m");  ////green colour
        }
    }
}
void insSpe(){
    if(head==0){
        printf("\n\e[31mLinklist not present! \e[0m");  //red colour
    }
    else{
        int opt=1,pos,j=0;
        while(opt){
            printf("\nEnter position ");
            scanf("%d",&pos);
            if(pos<1||pos>count+1){
                printf("\n\e[31mInvalid position! \e[0m");  //red colour
            }
            else if(pos==1){
                newnode=(struct node*)malloc(sizeof(struct node));      //for insert before first node
                if(newnode==NULL){
                    printf("\n\e[31mSorry, didn't find enoough space!\n\n\e[0m");
                }
                else{
                    printf("Enter data: ");
                    scanf("%d",&newnode->data);
                    newnode->next=head;
                    temp=head=newnode;
                    count++;
                    j=1;
                }
            }
            else if(pos==count+1){
                temp=head;
                while(temp->next!=0){       // for traval to last node
                    temp=temp->next;
                }
                newnode=(struct node*)malloc(sizeof(struct node));      //for insert after last node
                if(newnode==NULL){
                    printf("\n\e[31mSorry, didn't find enoough space!\n\n\e[0m");
                }
                else{
                    printf("Enter data: ");
                    scanf("%d",&newnode->data);
                    newnode->next=0;
                    temp->next=newnode;
                    temp=temp->next;
                    count++;
                    j=1;
                }
            }
            else{
                int i=2;
                temp=head;
                while(i<pos){
                    temp=temp->next;
                    i++;
                }
                newnode=(struct node*)malloc(sizeof(struct node));
                /*if malloc not locat any memory location*/
                if(newnode==NULL){
                    printf("\n\e[31mSorry, didn't find enoough space!\n\n\e[0m");
                }
                else{
                    printf("Enter data: ");
                    scanf("%d",&newnode->data);
                    newnode->next=temp->next;
                    temp->next=newnode;
                    count++;
                    j=1;
                }
            }
            printf("\npress '0' for exit, 'other' for Insert again ");  
            scanf("%d",&opt);
        }
        if(j==1){
            printf("\n\e[32mSuccessfully inserted \e[0m");  //green colour
        }
        else{
            printf("\n\e[31mNothing changed! \e[0m");  //red colour
        }
    }
}
/*............Delete..............*/
void delFirst(){
    if(head==0){
        printf("\n\e[31mLinklist not present! \e[0m");  //red colour
    }
    else{
        int opt=1,i=0;
        while(opt){
            temp=head;
            printf("\n%d is \e[31mDeleted! \e[0m",temp->data);
            head=head->next;
            free(temp);     // for memory free
            count--;
            i=1;
            if(head==0){
                i=0;
                printf("\n\n\e[31mAll data is Deleted! \e[0m");  //red colour
                return;
            }
            printf("\npress '0' for exit, 'other' for Delete again ");  
            scanf("%d",&opt);
        }
        if(i==1){
            printf("\n\e[32mSuccessfully Deleted \e[0m");  ////green colour
        }
    }
}
void delLast(){
    if(head==0){
        printf("\n\e[31mLinklist not present! \e[0m");  //red colour
    }
    else{
        int opt=1,i=0;
        while(opt){
            
            if(head->next==0){
                temp=head;
                printf("\n%d is \e[31mdeleted! \e[0m",temp->data);
                head=head->next;
                free(temp);     // for memory free
                count--;
                i=0;
                printf("\n\n\e[31mAll data is Deleted! \e[0m");  //red colour
                return;
            }
            else{
                temp=head;
                while(temp->next){
                    if(temp->next->next==0){
                        break;
                    }
                    temp=temp->next;
                }
                printf("\n%d is \e[31mDeleted! \e[0m",temp->next->data);
                free(temp->next);       // for memory free
                temp->next=0;
                count--;
                i=1;

                printf("\npress '0' for exit, 'other' for Delete again ");  
                scanf("%d",&opt);
            }
        }
        if(i==1){
            printf("\n\e[32mSuccessfully Deleted \e[0m");  ////green colour
        }
    }
}
void delSpe(){
    if(head==0){
        printf("\n\e[31mLinklist not present! \e[0m");  //red colour
    }
    else{
        int pos,opt=1,j=0;;
        while(opt){
            printf("\nEnter position ");
            scanf("%d",&pos);
            if(pos<1||pos>count){
                printf("\n\e[31mInvalid position! \e[0m");  //red colour
            }
            else if(pos==1){    /*when user want to delete 1st node*/
                temp=head;
                printf("\n%d is \e[31mDeleted! \e[0m",temp->data);
                head=head->next;
                free(temp);     // for memory free
                temp=head;
                count--;
                j=1;
                if(head==0){
                    printf("\n\n\e[31mAll data is Deleted! \e[0m");  //red colour
                    return;
                }
            }
            else if(pos==count){    /*when user want to delete last node*/
                temp=head;
                while(temp->next){
                    if(temp->next->next==0){
                        break;
                    }
                    temp=temp->next;
                }
                printf("\n%d is \e[31mDeleted! \e[0m",temp->next->data);
                free(temp->next);       // for memory free
                temp->next=0;
                count--;
                j=1;
            }
            else{
                struct node *second;        //use for memory free
                int i=2;
                temp=head;
                while(i<pos){
                    temp=temp->next;
                    i++;
                }
                printf("\n%d is \e[31mDeleted! \e[0m",temp->next->data);
                second=temp->next;
                temp->next=temp->next->next;
                free(second);
                count--;
                j=1;
            }
            printf("\npress '0' for exit, 'other' for Delete again ");  
            scanf("%d",&opt);
        }
        if(j==1){
            printf("\n\e[32mSuccessfully Deleted \e[0m");  //green colour
        }
        else{
            printf("\n\e[31mNothing changed! \e[0m");  //red colour
        }
    }
}
/*............Shorting............*/
void reverse(){
    if(head==0){
        printf("\n\e[31mNo data present! \e[0m");   //red colour
    }
    else if(count<2){
        printf("\n\e[31mLinklist is Too short! \e[0m");  //red colour
    }
    else{
        int i=0,j;
        struct node *nextnode,*prevnode;
        /*where nextnode is for next node
        prevnode for privious node & temp for current node*/
        /*print privious*/
        temp=head;
        printf("\nBefore reverse: ");
        while(temp){
            printf(" %d ",temp->data);
            temp=temp->next;
        }
        nextnode=temp=head;
        prevnode=0;
        /*for traval to last and reverse the link*/
        while(nextnode){
            nextnode=nextnode->next;
            temp->next=prevnode;
            prevnode=temp;
            temp=nextnode;
        }
        head=prevnode;
        /*print after sorting*/
        temp=head;
        printf("\n\nAfter reverse: ");
        while(temp){
            printf(" %d ",temp->data);
            temp=temp->next;
        }
        printf("\n\n\e[32mSuccessfully Shorted \e[0m");  //green colour
    }
}
void ascending(){
    if(head==0){
        printf("\n\e[31mNo data present! \e[0m");   //red colour
    }
    else if(count<2){
        printf("\n\e[31mLinklist is Too short! \e[0m");  //red colour
    }
    else{
        int i=0;
        struct node *second;
        temp=head;
        /*print privious*/
        printf("\nBefore sorting: ");
        while(temp){
            printf(" %d ",temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp){
            second=temp->next;
            while(second){
                if(temp->data > second->data){    //let temp->data=5,second->data=3
                    i=1;
                    temp->data=temp->data+second->data;     //temp->data=5+3 = 8
                    second->data=temp->data-second->data;   //second->data=8-3 = 5
                    temp->data=temp->data-second->data;     //temp->data=8-5 = 3
                }
                second=second->next;
            }
            if(temp->next->next==0){
                break;
            }
            else{
                temp=temp->next;
            }
        }
        temp=head;
        /*print after sorting*/
        printf("\n\nAfter sorting: ");
        while(temp){
            printf(" %d ",temp->data);
            temp=temp->next;
        }
        if(i>0){
            printf("\n\n\e[32mSuccessfully Shorted \e[0m");  //green colour
        }
        else{
            printf("\n\n\e[31mNothing changed! \e[0m");  //red colour
        }
    }
}
void descending(){
    if(head==0){
        printf("\n\e[31mNo data present! \e[0m");   //red colour
    }
    else if(count<2){
        printf("\n\e[31mLinklist is Too short! \e[0m");  //red colour
    }
    else{
        int i=0;
        struct node *second;
        temp=head;
        /*print privious*/
        printf("\nBefore shorting: ");
        while(temp){
            printf(" %d ",temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp){
            second=temp->next;
            while(second){
                if(temp->data < second->data){     //let temp->data=5,second->data=3
                    i=1;
                    temp->data=temp->data+second->data;     //temp->data=5+3 = 8
                    second->data=temp->data-second->data;   //second->data=8-3 = 5
                    temp->data=temp->data-second->data;     //temp->data=8-5 = 3
                }
                second=second->next;
            }
            if(temp->next->next==0){
                break;
            }
            else{
                temp=temp->next;
            }
        }
        temp=head;
        printf("\n\nAfter shorting: ");
        while(temp){
            printf(" %d ",temp->data);
            temp=temp->next;
        }
        if(i>0){
            printf("\n\n\e[32mSuccessfully Shorted \e[0m");  //green colour
        }
        else{
            printf("\n\n\e[31mNothing changed! \e[0m");  //red colour
        }
    }
}
/*............Searching...........*/
void bydata(){
    if(head==0){
        printf("\n\e[31mNo data present! \e[0m");   //red colour
    }
    else{
        int dt,j,found,pos,opt=1;
        while(opt){
            temp=head;
            found=0;
            pos=1;
            printf("\nenter data ");
            scanf("%d",&dt);
            printf("You searched for \e[32m<< %d >>\e[0m\n",dt);
            while(temp){
                if(temp->data==dt){
                    printf("\nData found in node \e[32m<< %d >> \e[0m",pos);
                    found++;
                    j=1;
                }
                temp=temp->next;
                pos++;
            }
            if(found>0){
                printf("\n\n\e[32mFound: %d \e[0m",found);
            }
            else{
                printf("\n\e[31mData not found! \e[0m");
            }
            printf("\npress '0' for exit, 'other' for Search again ");  
            scanf("%d",&opt);
        }
        if(j==1){
            printf("\n\e[32mSuccessfully Searched \e[0m");  ////green colour
        }
        else{
            printf("\n\e[31mData may not present in linklist! \e[0m");
        }
    }
}
void byposition(){
    if(head==0){
        printf("\n\e[31mNo data present! \e[0m");   //red colour
    }
    else{
        int pos,i,j,opt=1;
        while(opt){
            i=1;
            temp=head;
            printf("\nenter position ");
            scanf("%d",&pos);
            if(pos<1 || pos>count){
                printf("\n\e[31minvalid position! \e[0m");
                i=0;
            }
            else{
                while(i<pos){
                    temp=temp->next;
                    i++;
                }
                j=1;
                printf("\nData:\e[32m %d \e[0m",temp->data);
            }
            printf("\npress '0' for exit, 'other' for Search again ");  
            scanf("%d",&opt);
        }
        if(j==1){
            printf("\n\e[32mSuccessfully Searched \e[0m");  ////green colour
        }
        else{
            printf("\n\e[31mLinklist might be short! \e[0m");
        }
    }
}
/*...............Exit.............*/
void back(){
    if(head!=0){        //for free reserved momory before exit
        while(head){
            temp=head;
            head=head->next;
            free(temp);
        }
    }
    char a[]="\n\n\t\e[1;36m*=================================*\e[0m";
    char b[]="\n\t\e[1;36m|        T H A N K   Y O U        |\e[0m";
    char c[]="\n\t\e[1;36m|\e[1;31m       ---Developed  by---       \e[1;36m|";
    char d[]="\n\t|\e[1;32m S I D H A R T H   C H A N D R A \e[1;36m|";
    char e[]="\n\t*=================================*\e[0m ";
    int i;
    for(i=0; i<sizeof(a); i++){
        printf("%c",a[i]);
        Sleep(25);
    }
    Sleep(150);
    for(i=0; i<sizeof(b); i++){
        printf("%c",b[i]);
        Sleep(25);
    }
    Sleep(150);
    for(i=0; i<sizeof(c); i++){
        printf("%c",c[i]);
        Sleep(25);
    }
    Sleep(150);
    for(i=0; i<sizeof(d); i++){
        printf("%c",d[i]);
        Sleep(25);
    }
    Sleep(150);
    for(i=0; i<sizeof(e); i++){
        printf("%c",e[i]);
        Sleep(25);
    }
    Sleep(150);
}
/*........F.......I........N.........I.........S.........H...........E.........D........*/