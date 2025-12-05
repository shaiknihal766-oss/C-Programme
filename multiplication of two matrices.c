#include<stdio.h>
int main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int b[4][2]={{3,2,4,5},{9,8,7,6},{2,1,4,3}};
	int res[3][2];
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<4;k++){
				res[i][j]+=a[k][i]*b[j][k];
			}
			printf("\n");
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
	
}
