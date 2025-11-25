#include<stdio.h>
int main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	int product=1;
	for(int i=1;i<=n;i++){
		product=product*i;
		printf("the  factorial of %d the number is :%d\n",i,product);
	
	}

	return 0;
}
