#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff;
    int exp;
    struct node *next;
};


struct node* createNode(int coeff, int exp)
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;

    return newNode;
}


struct node* insert(struct node *head, int coeff, int exp)
{
    struct node *newNode, *temp;

    newNode = createNode(coeff, exp);

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    return head;
}

void display(struct node *head)
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%dx^%d", temp->coeff, temp->exp);

        if (temp->next != NULL)
            printf(" + ");

        temp = temp->next;
    }

    printf("\n");
}

// Add two polynomials
struct node* add(struct node *p1, struct node *p2)
{
    struct node *result = NULL;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->exp == p2->exp)
        {
            result = insert(result,
                            p1->coeff + p2->coeff,
                            p1->exp);

            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->exp > p2->exp)
        {
            result = insert(result, p1->coeff, p1->exp);
            p1 = p1->next;
        }
        else
        {
            result = insert(result, p2->coeff, p2->exp);
            p2 = p2->next;
        }
    }


    while (p1 != NULL)
    {
        result = insert(result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    while (p2 != NULL)
    {
        result = insert(result, p2->coeff, p2->exp);
        p2 = p2->next;
    }

    return result;
}

int main()
{
    struct node *p1 = NULL;
    struct node *p2 = NULL;
    struct node *result = NULL;

    int n1, n2;
    int i, coeff, exp;

    printf("Enter number of terms in first polynomial: ");
    scanf("%d", &n1);

    printf("Enter coefficient and exponent:\n");

    for (i = 0; i < n1; i++)
    {
        scanf("%d %d", &coeff, &exp);
        p1 = insert(p1, coeff, exp);
    }

    printf("Enter number of terms in second polynomial: ");
    scanf("%d", &n2);

    printf("Enter coefficient and exponent:\n");

    for (i = 0; i < n2; i++)
    {
        scanf("%d %d", &coeff, &exp);
        p2 = insert(p2, coeff, exp);
    }

    printf("\nFirst Polynomial: ");
    display(p1);

    printf("Second Polynomial: ");
    display(p2);

    result = add(p1, p2);

    printf("Resultant Polynomial: ");
    display(result);

    return 0;
}
