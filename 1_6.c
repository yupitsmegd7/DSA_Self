/*2.2 Write a program to perform the following operations on a given 
square matrix using functions:
i. Find the no.of nonzero elements
ii. Display upper triangular matrix
iii. Display the elements of just above and below the main diagonal*/

#include <stdio.h>

int zeros(int r, int c, int a[r][c])
{
	int co=0;
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			if (a[i][j]!=0){
				co++;
			}
		}
	}
	return co;
}

void upptri(int r,int c,int a[r][c]){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i<=j){
				printf("%d ",a[i][j]);
			}
			else 
				printf("0 ");
		}
		printf("\n");
	}
}

void diagside(int r,int c,int a[r][c]){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(j==i+1){
				printf("above: %d ",a[i][j]);
			}
			else if(i==j+1){
				printf("below: %d ",a[i][j]);
			}
		}
	}
	printf("\n");
}

int main(){
	int r=0,c=0;

	printf("Enter the row and columns in a matrix");
	scanf("%d %d",&r,&c);

	int a[r][c];

	for(int i=0;i<r;i++){	
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n**MENU**\n");

	int y=1;
	int choice=0;

	do{
		printf("\n 1) Find non zero elements \n 2) Find upper triangualr matrix elements \n 3) Find the elements just above and below diagonal elements\n 4) Exit");

		printf("\nEnter choice: ");
		scanf("%d",&choice);

		switch(choice){
			case 1:
				printf("Number of non-zero elements = %d\n",zeros(r,c,a));
				break;

			case 2:
				upptri(r,c,a);
				break;

			case 3:
				diagside(r,c,a);
				break;

			case 4:
				return 0;
		}

		printf("Do you want to continue?...(0|1)");
		scanf("%d",&y);

	}while(y==1);
		
	return 0;
}
