#include<stdio.h>
int main()
{
	float length;
	printf("enter length :");
	scanf("%f",&length);
	float breadth;
	printf("enter breadth :");
	scanf("%f",&breadth);
	float area=length*breadth;
	printf("the area of rectangle is %.3f cm\n",area);
	return 0;
}
