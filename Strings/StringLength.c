#include <stdio.h>

int main()
{
	char *p = "WELCOME";
	int i;
	for(i = 0; p[i]!='\0'; i++);
	printf("%d\n",i);
}
