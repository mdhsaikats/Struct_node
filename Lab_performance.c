#include<stdio.h>
#include<stdlib.h>
struct node
{
    char chr;
    int data;
    struct node *next;
};

int main()
{
    struct node *head,*body,*leg,*end,*ptr,*del1,*del2;
    head=malloc(sizeof(struct node));
    body=malloc(sizeof(struct node));
    leg=malloc(sizeof(struct node));
    end=malloc(sizeof(struct node));
    head->chr='A';
    head->data=10;
    head->next=body;
    body->chr='B';
    body->data=15;
    body->next=leg;
    leg->chr='C';
    leg->data=20;
    leg->next=end;
    end->chr='D';
    end->data=30;
    end->next=NULL;

    //middle_delete

    del1=head;
    del2=head;
    int delpos=4;
    delpos--;

    while(delpos!=1)
    {
        del1=del2;
        del2=del2->next;
        --delpos;
    }
    del1->next=del2->next;
    free(del2);
    del2=NULL;

    ptr=head;

    while(ptr!=NULL)
    {
        printf("%c %d\n",ptr->chr,ptr->data);
        ptr=ptr->next;
    }

}
//saikat
