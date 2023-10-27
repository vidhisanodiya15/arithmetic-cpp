#include<stdio.h>
int square(int y);//function prototype
int add(int c,int d);
int main()
{
	int a=5,b=10;
	int x;
	for (x=1;x<=10;++x){
		printf("%d",square(x));//function call
		//end for
	puts(" ");
	///end main
	
	}
	printf("The sum is %d",add(a,b));
}
int square(int y)//function definition
{
 	return y*y;//return the square of y as an int
}
int add(int c,int d)
{
	return c+d;
}
