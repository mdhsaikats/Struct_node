#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void push(int data, struct node **top) {
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    new_node->data = data;
    new_node->next = *top;
    *top = new_node;
}

int pop(struct node **top) {
    if (*top == NULL) {
        printf("Underflow\n");
        return -1;
    }
    int popped_data = (*top)->data;
    struct node *temp = *top;
    *top = (*top)->next;
    free(temp);
    return popped_data;
}

int main() {
    struct node *top = NULL;

    push(1, &top);
    push(2, &top);
    push(3, &top);

    printf("%d\n", pop(&top));
    printf("%d\n", pop(&top));
    printf("%d\n", pop(&top));
    printf("%d\n", pop(&top));

    return 0;
}

