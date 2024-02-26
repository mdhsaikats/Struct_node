#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *pre;
    struct node *next;
};

int main()
{
    struct node *head, *second , *third ,*ptr;
    head=malloc(sizeof(struct node));
    second=malloc(sizeof(struct node));
    third=malloc(sizeof(struct node));

    head->data=6;
    head->next=second;
    head->pre=NULL;

    second->data=7;
    second->next=third;
    second->pre=head;

    third->data=8;
    third->next=NULL;
    third->pre=second;

    free(third);
    third=NULL;

    ptr=head;
    while( ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }

    return 0;



}
//saikat




