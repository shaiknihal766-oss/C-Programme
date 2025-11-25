#include<stdio.h>
#include<math.h>
int main()
{
	int digit_count,sum=0,n,temp;
	printf("enter number n :");
	scanf("%d",&n);
	digit_count = (int)log10(n) + 1;
	temp=n;
	while(temp!=0){
		int cur_digit=temp%10;
		sum=sum+pow(cur_digit,digit_count);
		temp=temp/10;
	}
	if(sum==n) {
		printf("%d is an amstrong number ",n);
	}
	else{
		printf("it is not an amstrong number");
	}
	return 0;
}
