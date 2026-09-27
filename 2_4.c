/*4.1 Write a program to create a single linked list of n nodes and perform the following menu-based
operations on it using function:
i. Insert a node at specific position
ii. Deletion of an element from specific position
iii. Count nodes
iv. Traverse the linked list
v. search an element in the list
vi. sort the list in ascending order
vii. reverse the list*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};

struct node *head = NULL;

int count() {
    int c = 0;
    struct node *temp = head;

    while (temp != NULL) {
        c++;
        temp = temp->next;
    }

    return c;
}

void insert(int x, int pos) {
    int n = count();

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return;
    }

    struct node *b = (struct node *)malloc(sizeof(struct node));
    b->info = x;

    if (pos == 1) {
        b->next = head;
        head = b;
        return;
    }

    struct node *temp = head;

    for (int i = 1; i < pos - 1; i++)
        temp = temp->next;

    b->next = temp->next;
    temp->next = b;
}

void del(int pos) {
    int n = count();

    if (pos < 1 || pos > n) {
        printf("Invalid position\n");
        return;
    }

    struct node *temp = head;

    if (pos == 1) {
        head = head->next;
        free(temp);
        return;
    }

    for (int i = 1; i < pos - 1; i++)
        temp = temp->next;

    struct node *t = temp->next;

    temp->next = t->next;
    free(t);
}

void traverse() {
    struct node *temp = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->next;
    }

    printf("\n");
}

void search(int x) {
    struct node *temp = head;
    int pos = 0;

    while (temp != NULL) {
        if (temp->info == x) {
            printf("Element found at position %d\n", pos);
            return;
        }

        temp = temp->next;
        pos++;
    }

    printf("Element doesn't exist\n");
}

void sort() {
    struct node *i, *j;
    int t;

    for (i = head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->info > j->info) {
                t = i->info;
                i->info = j->info;
                j->info = t;
            }
        }
    }
}

void reverse() {
    struct node *curr = head;
    struct node *prev = NULL;
    struct node *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

int main() {
    int n, x, pos, ch;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter element: ");
        scanf("%d", &x);
        insert(x, i);
    }

    do {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Count");
        printf("\n4. Traverse");
        printf("\n5. Search");
        printf("\n6. Sort");
        printf("\n7. Reverse");
        printf("\n8. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch) {

        case 1:
            printf("Enter element and position: ");
            scanf("%d%d", &x, &pos);
            insert(x, pos);
            break;

        case 2:
            printf("Enter position: ");
            scanf("%d", &pos);
            del(pos);
            break;

        case 3:
            printf("Number of nodes = %d\n", count());
            break;

        case 4:
            traverse();
            break;

        case 5:
            printf("Enter element to search: ");
            scanf("%d", &x);
            search(x);
            break;

        case 6:
            sort();
            printf("List sorted\n");
            break;

        case 7:
            reverse();
            printf("List reversed\n");
            break;

        case 8:
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (ch != 8);

    return 0;
}
