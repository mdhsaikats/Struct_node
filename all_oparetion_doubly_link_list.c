#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *pre;
    struct node *next;
};

int main()
{
    struct node *head , * body , * end , *ptr;
    head=malloc(sizeof(struct node));
    body=malloc(sizeof(struct node));
    end=malloc(sizeof(struct node));

    head->pre=NULL;
    head->data=1;
    head->next=body;

    body->pre=head;
    body->data=2;
    body->next=end;

    end->pre=body;
    end->data=3;
    end->next=NULL;

    //first insertion

    struct node *first;
    first=malloc(sizeof(struct node));
    first->pre=NULL;
    first->data=21;
    first->next=head;
    head=first;

    //middle_insertion

    struct node *middle;
    middle=malloc(sizeof(struct node));
    middle->pre=NULL;
    middle->data=31;
    middle->next=NULL;
    int pos=3;
    pos--;
     
     struct node *tr;
     tr=head;
     while(pos != 1)
     {
        tr=tr->next;
        pos--;
     }
    middle->next=tr->next;
    tr->next=middle;

     
     //last_insertion
    struct node *last;
    last=malloc(sizeof(struct node));
    last->pre=NULL;
    last->data=41;
    last->next=NULL;
    end->next = last;
    end=last;


    //first_delete
    struct node *del;
    del=head;
    head=head->next;
    free(del);
    del=NULL;

    //midle_delete
    struct node *del1;
    struct node *del2;
    del1=head;
    del2=head;
    int delpos=3;
    --delpos;
    while(delpos!=1)
    {
        del1=del2;
        del2=del2->next;
        --delpos;
    }
    del1->next=del2->next;
    free(del2);
    del2=NULL;

    //last_node
    struct node *temp1 , *temp2;
    temp1=head;
    temp2=head;
    while(temp2->next!=NULL)
    {
        temp1=temp2;
        temp2=temp2->next;
    }
    temp1->next=NULL;
    free(temp2);
    temp2=NULL;



    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}