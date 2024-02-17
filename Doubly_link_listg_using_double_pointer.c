#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *pre;
    struct node *next;
    struct node *tr;
};

int main() {
    struct node *head, *body, **temp;
    head = malloc(sizeof(struct node));
    head->data = 5;
    head->pre = NULL;
    head->next = NULL;
    head->tr = NULL;

    body = malloc(sizeof(struct node));
    body->data = 7;
    body->pre = head;
    body->next = NULL;
    body->tr = NULL;

   //connect_using_double_pointer

    temp = &(head->next);
    *temp = body;
    temp = &(head->tr);
    *temp = body->pre;

    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
