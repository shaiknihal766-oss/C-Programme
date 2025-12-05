#include<stdio.h>
int main()
{
	int n,arr[n];
	printf("the size of array is :\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	 arr[2]=11;
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
