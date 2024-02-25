#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top;
void push(int data)
{
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    head->data = data;
    head->next = top;
    top = head;
}
void pop()
{
    struct Node* temp = top;
    top = top->next;
    free(temp);
}
int main()
{
  push(1);
  push(2);
  push(3);
  pop();
 struct node *ptr;
 ptr=top;
  while(ptr!=NULL)
  {
      printf("%d\n",ptr->data);
      ptr=ptr->next;
  }
  return 0;
}
