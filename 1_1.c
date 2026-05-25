//Insertion Operation through Traversal


#include <stdio.h>
int main()
{
int a[10];
int n=0,c=0,s=0;
scanf("%d",&n);
if (n>=10){
	printf("Overflow");}
else{
	printf("Enter insertion index and message");
	scanf("%d %d",&c,&s);
	if (c<0||c>n){
	printf("Invalid placement");
	return 0;
	}
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);	
		}
	for (int i=(n-1);i>=c;i--)
	{	a[i+1]=a[i];
	}
	a[c]=s;
	printf("Inserted \n");
	for (int i=0;i<n+1;i++){
		printf("%d ",a[i]);	
	}
	}
	
// TC=O(n)
	
return 0;
}

/*
	The best practice for this kinda array (without sorting) is that:
	We change the a[n]=a[req_pos]&
	              a[req_pos]=req
	TC=O(1)
*/
