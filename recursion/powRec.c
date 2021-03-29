#include <stdio.h>
int power(int m, int n)
{
/*
	if(n == 0)
		return 1;
	else
		return power(m,n-1)*m;
*/
	if(n == 0)
		return 1;
	if(n%2 == 0)
		return power(m*m, n/2);
	else
		return m*power(m*m, (n-1)/2);
}

int main()
{
	printf("%d \n",power(2,9));
	return 0;
}

