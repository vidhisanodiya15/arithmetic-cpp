#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int*p=a;//pointers p starts pointing towards first element of array
	
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n%d",(p+i));
	}
}
