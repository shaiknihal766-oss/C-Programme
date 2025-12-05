#include<stdio.h>
int main()
{
	int n;
	printf("enter number n:");
	scanf("%d",&n);
int	factor_count=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
		factor_count=factor_count+1;
	}
	}//prime number contains 1 and number by its self 2 factors
	if(factor_count==2){
	printf("the number is prime");
}
   else{
   	printf("the number is not prime");
   }
   return 0;
}
