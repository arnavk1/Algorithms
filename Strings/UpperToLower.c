#include<stdio.h>
int main()
{
	char p[] = "WeLcOmE";
	int i;
	for(i = 0; p[i]!='\0'; i++)
	{
		if(p[i]>=65 && p[i]<=90)
			p[i] = p[i] + 32;
		else if(p[i]>='a' && p[i] <='z')
			p[i] -= 32;
	}
	printf("%s\n",p);
	return 0;
}
