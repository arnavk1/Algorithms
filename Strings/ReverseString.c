#include<stdio.h>
int main()
{
	char A[] = "astroid";
	int j,i;
	char temp;
	for(j = 0; A[j]!='\0';j++);
	j -= 1;
	for(i = 0; i < j; i++,j--)
	{
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
	printf("%s\n", A);
	return 0;
}
