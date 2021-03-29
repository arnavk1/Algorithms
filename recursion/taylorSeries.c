#include<stdio.h>
double taylor(int x, int n)
{
/*
	static double p = 1, f = 1;
	double r;
	if(n == 0)
		return 1;
	else
	{
		r = taylor(x,n-1);
		p = p*x;
		f = f*n;
		return r+p/f;
	}
*/

	static double s;
	if(n == 0)
		return s;
	else
	{
		s = 1 + (x*s)/n;
		return taylor(x,n-1);
	}

}

int main()
{
	printf("%lf\n", taylor(1,10));
	return 0;
}
