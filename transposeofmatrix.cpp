#include<stdio.h>
int main()
{
	int r;
	printf("the no.0f rows in matrix :");
	scanf("%d",&r);
	int c;
		printf("the no.0f columns in matrix :");
	    scanf("%d",&c);
	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
		for(int i=0;i<c;i++){
			for(int j=0;j<r;j++){
				printf("%d",arr[j][i]);
			}
		}
		return 0;
	
}
