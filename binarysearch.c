#include<stdio.h>
int main()   {
int a[6]={10,20,50,60,70,80};
	int key=50,i,low=0,high=5,mid=0,found=0;
	printf("enter a key");
	scanf("%d",&key);
while(low<=high)
{  	mid=(high+low)/2;
	if(key==a[mid])  {  found=1;
                                               break;    	}	
	else if (key<a[mid])
	high=mid-1;
	else
	low=mid+1;
}
	if(found==0)     printf("key was not found ");
	else		printf("key was found at %d position",mid);
	return 0;
}

