#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head=NULL , *current , *temp , *ptr;
    int a[5]={5,6,7,8,9};      //array
    for(int i=0; i<=4; i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=a[i];
        temp->next=NULL;
    if(head == NULL)
    {
        head=temp;
        current=temp;
    }else{
        current->next=temp;
        current = current->next;
    }
}
     //Display

    ptr=head;
    while(ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}
