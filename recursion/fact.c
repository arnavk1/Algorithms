#include<stdio.h>
int fact(int n)
{
	if(n == 0 || n == 1)
		return 1;
	else
		return fact(n-1)*n;
}
int main()
{
	printf("Factorial of n no is %d\n", fact(5));
	return 0;
}
