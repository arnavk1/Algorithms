#include <stdio.h>
int main()
{
	char A[] = "How are   You";
	int i, words = 1;
	for(i = 0; A[i]!='\0'; i++)
	{
		if(A[i] == ' ' && A[i-1] != ' ')
			words++;
	}
	printf("words = %d\n",words);
	return 0;
}
