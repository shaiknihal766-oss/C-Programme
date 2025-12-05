#include<stdio.h>
int main()
{
	int arr[4][3]={{1,2,3,4},{5,6,7,8},{4,9,8,1}};
	int maxsum=0;
	int maxidx=0;
	for(int i=0;i<4;i++){
	int	sum=0;
	for(int j=0;j<3;j++){
		sum=sum+arr[i][j];
	}
	if(maxsum<sum){
		maxsum=sum;
		maxidx=i;
	}
	}
	printf("%d\n",maxsum);
	printf("%d",maxidx);
	
	return 0;
}
