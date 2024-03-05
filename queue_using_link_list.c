#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
struct node *front,*rear;
void enqueue(int data)
{
    struct node *new;
    new=malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;

    if(front==NULL && rear==NULL)
    {
        front=rear=new;
    }
    else{
        rear->next=new;
        rear=new;
    }
}
void dequeue()
{
    struct node *temp=front;
    front=front->next;
    free(temp);
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    dequeue();
struct node *ptr;
ptr=front;
while(ptr!=NULL)
{
    printf("%d\n",ptr->data);
    ptr=ptr->next;
}
return 0;
}
