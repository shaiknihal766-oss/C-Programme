#include<stdio.h>
int main()
{
	int y;
	printf("enter year y :");
	scanf("%d",&y);
	if((y%2==0)&&(y/100!=0)||(y/400==0)){ //to check leap year the number should be 
		printf("it is leap year");     //divisible by 4,not divisible by 100
	}                                   //divisible by 400
	else
	printf("it is not leap year");
	return 0;
}
