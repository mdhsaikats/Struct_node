#include<stdio.h>
int s_array[5];
int top=-1;


void push(int data)
{
    top=top+1;
    s_array[top]=data;
}

void pop()
{
    top--;
}

int main(){
    push(1);
    push(2);
    push(3);
    pop();
   // pop();

    for(int i=top; i>=0; i--)
    {
        printf("%d\n",s_array[i]);
    }
}
