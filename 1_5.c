/*2.1 WAP to create a 1-D array of n elements and perform the following 
menu based operations using function.
a. insert a given element at specific position.
b. delete an element from a specific position of the array.
c. linear search to search an element
d. traversal of the array

***MENU***
1. Insert
2. Delete
3. Linear Search
4. Traverse
5. Exit*/

#include <stdio.h>
#include <stdlib.h>

void insert(int **a, int *n){
    int val,pos;
    printf("Enter value and position: ");
    scanf("%d%d",&val,&pos);

    if(pos<0 || pos>*n){
        printf("Invalid position\n");
        return;
    }

    *a=realloc(*a,(*n+1)*sizeof(int));

    for(int i=*n;i>pos;i--)
        (*a)[i]=(*a)[i-1];

    (*a)[pos]=val;
    (*n)++;
}

void delete(int a[],int *n){
    int pos;
    printf("Enter position to delete: ");
    scanf("%d",&pos);

    if(pos<0 || pos>=*n){
        printf("Invalid position\n");
        return;
    }

    for(int i=pos;i<*n-1;i++)
        a[i]=a[i+1];

    (*n)--;
    printf("Item deleted\n");
}

void search(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("Found at position %d\n",i);
            return;
        }
    }

    printf("Key does not exist\n");
}

void traverse(int a[],int n){
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    printf("\n");
}

int main(){
    int n,ch,key;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int *a=malloc(n*sizeof(int));

    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    do{
        printf("\n***MENU***\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Linear Search\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                insert(&a,&n);
                break;

            case 2:
                delete(a,&n);
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d",&key);
                search(a,n,key);
                break;

            case 4:
                traverse(a,n);
                break;

            case 5:
                break;

            default:
                printf("Invalid choice\n");
        }

    }while(ch!=5);

    free(a);
    return 0;
}
