#include<stdio.h>
int validate(char *name)
{
	int i;
	for(i = 0; name[i] != 0; i++)
	{
		if(!(name[i] >= 65 && name[i] <= 90) &&
		   !(name[i] >= 'a' && name[i] <= 122) &&
		   !(name[i] >= 48 && name[i] <= 56))
		     return 0;
	}
	return 1;
}
int main()
{
	char *p = "aster_id123";
	if(validate(p))
		printf("valid String\n");
	else
		printf("invalid String\n");
	return 0;
}
