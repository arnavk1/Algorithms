#include<stdio.h>
int main()
{
	char A[] = "fizndingz";
	int hashTbl[26], i, diff;
	for(i = 0; i < 26; i++)
	{
		hashTbl[i] = 0;
	}
	for(i = 0; A[i] != '\0'; i++)
	{
		diff = A[i] - 97;
		hashTbl[diff] += 1;
	}
	for(i = 0; i < 26; i++)
	{
		if(hashTbl[i] > 1)
		{
			printf("%c = %d\n",(i+97),hashTbl[i]);
		}
	}
	return 0;
}
