//Create a structure to store student details and his marks in 5 subjects

#include <stdlib.h>
#include <stdio.h>


struct stud{
    int marks[5];
    char name[100];
    int id;

};
void create(){
    
    int n=5;
    printf("ENter the number of records you want to store?");
    scanf("%d",&n);
    struct stud *(stu) = (struct stud *)malloc(n*sizeof(struct stud));

    for (int i=0;i<n;i++){
        printf("Enter marks\n");
        for (int j=0;j<5;j++){
            printf("Enter mark of sub %d ",j);
            scanf("%d",&(stu+i)->marks[j]);
        }
        printf("ENter name");
        scanf("%s",(stu+i)->name);
        printf("ENter id");
        scanf("%d",&(stu+i)->id);
    }
    printf("Students allocated");
}
int main(){
    create();
    return 0;
}
