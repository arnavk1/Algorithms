#include<stdio.h>
int main()
{
	char A[] = "How are You";
	int i, vowels = 0,cons = 0;
	for(i = 0; A[i] != '\0'; i++)
	{
		if(A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' 
		|| A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U')
			vowels++;
		else if(A[i] >= 65 && A[i] <= 90 || A[i] >='a' && A[i] <= 'z')
			cons++;
	}
	printf("Vowels = %d\nConsonents = %d\n",vowels,cons);
	return 0;
}
