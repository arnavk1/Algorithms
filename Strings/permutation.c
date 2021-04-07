#include<stdio.h>
void perm(char S[], int k)
{
	int i;
	static int A[10] = {0};
	static char R[10];
	if(S[k] == '\0')
	{
		R[k] = S[k];
		printf("%s\n",R);
	}
	else
	{
		for(i = 0; S[i] != 0; i++)
		{
			if(A[i] == 0)
			{
				R[i] = S[k];
				A[i] = 1;
				perm(S, k+1);
				A[i] = 0;
			}
		}
	}
}
int main()
{
	char S[] = "ABCD";
	perm(S, 0);
	return 0;
}
