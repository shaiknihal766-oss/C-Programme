//distance travelled by an object
#include<stdio.h>
int main()
{
	float u,a;
	int t;
	printf("enter u value :\n");
	scanf("%f",&u);
	printf("enter a value :\n");
	scanf("%f",&a);
	printf("enter t value :\n");
	scanf("%d",&t);
	int d=(u*t)+(a*t*t)/2;
	printf("the distnce travelled is :%d\n",d);
	return 0;
}
