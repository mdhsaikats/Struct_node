#include<stdio.h>
int s_array[5];
int top=0;
//int data;
void push(int data)
{
    if(top==4 )
    {
        printf("Overflow\n");
    }else{
    top++;
    s_array[top]=data;
    }

}
void pop()
{
    if(top ==-1){
        printf("UnderFlow\n");
    }else{
        top--;
    }
}
int main(){
    push(5);
    push(10);
    push(12);
    push(15);
    push(20);
    //push(2);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();



    for(int i=top; i>=0; i--)
    {
        printf("%d\n",s_array[i]);
    }
}
