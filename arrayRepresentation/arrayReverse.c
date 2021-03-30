#include <stdio.h>
#include <stdlib.h>

struct Array
{
	int A[10];
	int size;
	int len;
};

void reverse1(struct Array *arr)
{
	int *B;
	int i,j;
	B = (int *)malloc(arr->len*sizeof(int));
	for(i = arr->len-1, j =0; i >= 0; i--,j++)
		B[j] = arr->A[i];
	for(i = 0; i < arr->len; i++)
		arr->A[i] = B[i];
}

void reverse2(struct Array *arr)
{
	int i,j;
	int temp;
	for(i = 0,j = arr->len-1;i<j;i++,j--)
	{
		temp = arr->A[i];
		arr->A[i] = arr->A[j];
		arr->A[j] = temp;
	}
}

void Display(struct Array arr)
{
	int i;
	for(i = 0; i < arr.len; i++)
		printf("%d\t", arr.A[i]);
	printf("\n");
}


int main()
{
	struct Array arr = {{2,3,4,1,8},10,5};
	Display(arr);
	reverse1(&arr);
	Display(arr);
	reverse2(&arr);
	Display(arr);
	return 0;
}


