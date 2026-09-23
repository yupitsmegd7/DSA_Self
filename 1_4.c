/*1.4 Write a menu driven program to create a 
structure to represent complex number and perform the
following operation using function :
1. addition of two complex number (call by value)
2. multiplication of two complex number (call by address)*/

#include <stdio.h>

struct cmp{
	int real;
	int img;};
	
	
void add(struct cmp a,struct cmp b){
	printf("The addition of the two is: %d + %di",(a.real+b.real),(a.img+b.img));
	}
	
void mul(struct cmp *a,struct cmp *b){
	int e,r,t,y;
	e=a->real*b->real;
	r=a->real*b->img;
	t=a->img*b->real;
	y=a->img*b->img;
	printf("The multiplication resulted in: %d + %di",(e-y),(r+t));
	
	}
	
	
int main(){
int n=0;
struct cmp a,b;
printf("enter first complex number");
scanf("%d %d",&a.real,&a.img);
printf("enter second complex number");
scanf("%d %d",&b.real,&b.img);
while (n!=3){
	printf("\nMENU\n1)Addition\n2) Multiplication\n3)Exit\n");
	printf("ENter selection");
	scanf("%d",&n);
	switch (n){
		case 1:
			add(a,b);
			break;
		case 2:
			mul(&a,&b);
			break;
		case 3:
			return 0;
		default:
			printf("Invalid Choice");
	
	
	}
	}
	
return 0;}
