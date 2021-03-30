#include<stdio.h>

struct Array
{
	int A[10];
	int size;
	int len;
};

int isSorted(struct Array *arr)
{
	int i;
	for(i = 0; i < arr->len-1; i++)
	{
		if(arr->A[i] > arr->A[i+1])
		{
			return(0);
		}
		
	}
	return 1;
}

void insertInSortedArray(struct Array *arr, int ele)
{
	int i,temp;
	for(i = arr->len-1; i >= 0; i--)
	{
		if(ele < arr->A[i])
		{
			arr->A[i+1] = arr->A[i]; 
		}
		else
		{
			arr->A[i+1] = ele;
			break;
		}
	}
	arr->len ++;
}

void integerSorting(struct Array *arr)
{
	int i = 0,j = arr->len-1,temp;
	while(i<j)
	{
		while(arr->A[i] < 0)
			i++;
		while(arr->A[j] >= 0)
			j--;
		if(i<j)
		{
			temp = arr->A[i];
			arr->A[i] = arr->A[j];
			arr->A[j] = temp;
		}
	}
	
}

void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.len; i++)
		printf("%d\t",arr.A[i]);
	printf("\n");
}

int main()
{
	struct Array arr1={{2,4,5,7,12,15,18},10,7};
	struct Array arr2={{2,4,5,13,5,15,18},10,7};
	struct Array arr3={{-2,4,-5,7,12,-15,18},10,7};
	
	printf("%d\n",isSorted(&arr1));
	printf("%d\n",isSorted(&arr2));
	insertInSortedArray(&arr1, 13);
	display(arr1);
	integerSorting(&arr3);
	display(arr3);
	
	return 0;
}


