#include<stdio.h>
int sum(int n)
{
	if(n==0)
		return 0;
	else
		return sum(n-1)+n;
}

int main()
{
	printf("sum of n natural no is %d\n",sum(20));
	return 0;
}
