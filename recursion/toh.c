#include<stdio.h>
int toh(int n,char a, char b, char c)
{
	if(n == 1)
		printf("move disk from %c to %c\n",a,c);
	if(n > 1)
	{
		toh(n-1,a,c,b);
		printf("move disk from %c to %c\n",a,c);
		toh(n-1,b,a,c);
	}
}

int main()
{
	toh(3,'A','B','C');
	return 0;
}
