#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *newnode, *temp = NULL;
    int counter = 1,c=0;

    while(counter == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter new node: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Would you like to continue (1/0): ");
        scanf("%d", &counter);
        c++;
    }
int i=0,pos;
if(pos < 0 || pos > c)
{
    printf("Invalid position");
}
else if(pos == 0)
{
    newnode->next = head;
    head = newnode;
    printf("Inserted");
}
else
{
    temp = head;

    for(i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    printf("Inserted");
}
return 0;
}


