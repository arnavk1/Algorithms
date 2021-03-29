#include <stdio.h>
int comb(int c, int r)
{
	if(r == 0 || r == c)
		return 1;
	else
	{
		return comb(c-1,r-1)+comb(c-1,r);
	}
}

int main()
{
	printf("%d\n",comb(5,2));
	return 0;
}
