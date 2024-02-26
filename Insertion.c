#include<stdio.h>
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{

    struct node *head , *body , *end , *ptr;
    head=(struct node*)malloc(sizeof(struct node));
    body=(struct node*)malloc(sizeof(struct node));
    end=(struct node*)malloc(sizeof(struct node));


    head->data=5;
    body->data=7;
    head->next=body;
    end->data=10;
    body->next=end;
    end->next=NULL;

    //first insert
    struct node *first;
    first=malloc(sizeof(struct node));
    first->data=449;
    first->next=head;
    head=first;

    //middle insert
    struct node *middle;
    middle=malloc(sizeof(struct node));
    middle->data=123;
    middle->next=NULL;
    int pos =3;
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

    //last insert
    struct node *last;
    last = malloc(sizeof(struct node));
    last->data = 21;
    end->next = last;
    end = last;
    last->next=NULL;

    //Display
    ptr=head;
    while( ptr!= NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}
//saikat
