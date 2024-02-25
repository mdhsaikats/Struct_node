#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top , *head , *ptr;
void push(int data)
{
    head=(struct node*)malloc(sizeof(struct node));
    head->data = data;
    head->next = top;
    top = head;
}
void pop()
{
    struct Node *temp = top;
    temp=malloc(sizeof(struct node));
    top = top->next;
    free(temp);
}
int main()
{
  push(1);
  push(2);
  push(3);
  pop();
 ptr=top;
  while(ptr!=NULL)
  {
      printf("%d\n",ptr->data);
      ptr=ptr->next;
  }
  return 0;
}
