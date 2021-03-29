#include <stdio.h>
int main()
{
	int A[5];
	int B[5] = {2,3,4,5,6};
	int i;
	for(i=0; i < 5; i++)
	{
		printf("%d\t", B[i]+1);
	}
	printf("\n");
}
