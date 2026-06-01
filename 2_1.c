#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *newnode;

    head = NULL;

    newnode=(struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);   //referencing the data element in the new node

    newnode->next = NULL; //initializing the next pointer to access others

    if (head == NULL) {
        head = newnode;
    }

    printf("Data in first node: %d\n", head->data);

    free(newnode);
    return 0;
