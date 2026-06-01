#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode, *temp;
    int choice = 1;

    while (choice) {

        newnode = malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Add another node? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    }

    printf("\nLinked List:\n");

    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
