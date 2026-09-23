/*1.1 Write a program to read two numbers and compare the numbers using function call by address*/



#include <stdio.h>

void compare(int a,int b){
	if (a>b){
	printf("%d greater than %d",a,b);
	}
	if (b>a){
	printf("%d greater than %d",b,a);}
	else
	printf("Both are equal");

}

int main(){
int a,b;
scanf("%d %d",&a,&b);

compare(a,b);

return 0;
}
