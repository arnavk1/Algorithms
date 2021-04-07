#include<stdio.h>
int main()
{
	char A[] = "medical";
	char B[] = "decimkl";
	int hashTable[26],i;
	for(i = 0; i < 26; i++)
		hashTable[i] = 0;
	for(i = 0; A[i] != '\0'; i++)
	{
		hashTable[A[i]-97] += 1;
	}
	for(i = 0; B[i] != '\0'; i++)
	{
		hashTable[B[i] - 97] -= 1;
		if(hashTable[B[i] - 97] < 0)
		{
			printf("Is not an anagram\n");
			break;
		}
	}
	if(B[i] == '\0')
	{
		printf("Is an anagram\n");
	}
	return 0;
}
