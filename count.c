#include<stdio.h>
int main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	int count=0;
	while(n!=0){
		n=n/10;
		count=count+1;
	}
	printf("the count is :%d",count);
	return 0;
}
