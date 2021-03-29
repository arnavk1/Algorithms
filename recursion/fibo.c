#include<stdio.h>
int fib(int n)
{
/*
	if(n == 0 || n == 1)
		return 1;
	else
	{
		return fib(n-1)+fib(n-2);
	}
*/
	int F[10];
	int i;
	for(i = 0; i<10;i++)
		F[i] = -1;
	if(n<=1)
	{
		F[n] = n;
		return n;
	}
	else
	{
		if(F[n-2] == -1)
			F[n-2] = fib(n-2);
		if(F[n-1] == -1)
			F[n-1] = fib(n-1);
		return F[n-1]+F[n-2];
	}
}

int main()
{
	int y = fib(6);
	printf("%d\n",y);
	return 0;
}
