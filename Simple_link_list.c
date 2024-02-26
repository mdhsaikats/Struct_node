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
    head->data=5;

    body=(struct node*)malloc(sizeof(struct node));
    body->data=7;
    head->next=body;

    end=(struct node*)malloc(sizeof(struct node));
    end->data=10;
    body->next=end;
    end->next=NULL;

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
