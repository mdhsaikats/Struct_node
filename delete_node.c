#include<stdio.h>
#include<stdlib.h>
 struct node
 {
     int data;
     struct node *next;
 };
 int main()
 {
     struct node *a=malloc(sizeof(struct node)) , *b , *c , *d , *ptr , *temp, *del1,*del2 ,*delpre, *delcur;
     b=malloc(sizeof(struct node));
     c=malloc(sizeof(struct node));
     d=malloc(sizeof(struct node));
     a->data=7;
     a->next=b;
     b->data=8;
     b->next=c;
     c->data=9;
     c->next=d;
     d->data=10;
     d->next=NULL;

     /*
     temp = a;
     a = a->next;
     free(temp);
     temp=NULL;
     del1=a;
     del2=a;

     */

     delpre=a;
     delcur=a;
     int delpos = ;

     while(delpos != 1)
     {
         delpre = delcur;
         delcur= delcur->next;
         delpos--;
     }

     delpre->next=delcur->next;
     free(delcur);
     delcur=NULL;

    /*while(del2->next != NULL)
    {
        del1=del2;
        del2=del2->next;
    }
    del1->next=NULL;
    free(del2);
    del2=NULL;
    */
     ptr=a;
     while(ptr != NULL)
     {
         printf("%d\n",ptr->data);
         ptr=ptr->next;
     }
     return 0;
 }
//saikat
