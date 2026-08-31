//Palindrom sequence using stack and queue

#include <stdio.h>

#include <stdbool.h>

int stack[5],queue[5];
int top=-1,front=-1,rear=-1;

void push (int x){
    if (top==4){printf("Overflow");
        return;}
    stack[++top]=x;
}

int pop (){
    if (top==-1){printf("Underflow");
        return 0;}
    return stack[top--];
}

void display(){
    if (top==-1)printf("Stack is empty");
    for (int i=top;i>=0;i--){
        printf("%d ",*(stack +i));
    }
}

void enqueue(int x){
    if (rear==-1){
        front=rear=0;
        queue[rear]=x;
        return;
    }

    if (rear==4){
        printf("Overfilled queue");
        return;
    }
    queue[++rear]=x;

}

int dequeue(){
    if(front==-1){
        printf("Empty queue");
        return 0;
    }
    return queue[front++];
}
bool pali(char *a,int n){
    if (!a) return false;
    for (int i=0;i<n;i++){
        push(*(a+i));
        enqueue(*(a+i));
    }

    for (int i=0;i<n;i++){
        if ((dequeue())!=pop()){
            return false;
        }
    }
    return true;
}
int main(){
    char a[5];
    printf("ENter a 5 character name: ");
    scanf("%s",a);
    printf("\n%s",pali(a,5)?"Palindrom":"Not Palindrom");
    //a is a stack and b is a queue

    return 0;
}
