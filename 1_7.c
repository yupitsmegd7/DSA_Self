//2.3 WAP to represent a given sparse matrix in 3-tuple format using 2-D array.

#include <stdio.h>

int main(){
int r,c;
int n=0;
printf("ENter the number of rows and columns");
scanf("%d %d",&r,&c);
int a[r][c];
for (int i=0;i<r;i++){
	for (int j=0;j<c;j++){
		scanf("%d",&a[i][j]);
		}}
printf("\nMatrix made\n");
for (int i=0;i<r;i++){
	for (int j=0;j<c;j++){
		if (a[i][j]!=0){
			n++;}
					}}
int b[n+1][3];
int k=1;
b[0][0]=n;
b[0][1]=r;
b[0][2]=c;
for (int i=0;i<r;i++){
	for (int j=0;j<c;j++){
		if (a[i][j]!=0){
		b[k][0]=a[i][j];
		b[k][1]=i;
		b[k][2]=j;
		k++;
			}
			

		}
		}
return 0;
}
