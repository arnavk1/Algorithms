#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10];
	int size;
	int len;
};


void append(struct Array *arr, int ele)
{
	if(arr->len<arr->size)
		arr->A[arr->len++] = ele;
}

void insert(struct Array *arr, int index, int ele)
{
	int i;
	if(index >= 0 && index <= arr->len)
	{
		for(i = arr->len; i > index; i--)
		{
			arr->A[i] = arr->A[i-1];
		}
		arr->A[index] = ele;
		arr->len++;
	}
}

void deleteIndexEle(struct Array *arr, int index)
{
	int i;
	if(index>=0 && index < arr->len)
	{
		for(i = index; i < arr->len; i++)
		{
			arr->A[i] = arr->A[i+1];
		}
		arr->len--;
	}
}

void Lsearch(struct Array *arr, int key)
{
	int i;
	for(i = 0; i < arr->len; i++)
		if(key == arr->A[i])
			printf("%d is the element found at position %d\n", arr->A[i],i);		
}

int Get(struct Array arr,int index)
{
	if(index>=0 && index<arr.len)
	return arr.A[index];
	return -1;
}

void Set(struct Array *arr,int index,int x)
{
	if(index>=0 && index<arr->len)
		arr->A[index]=x;
}

int Max(struct Array arr)
{
	int max=arr.A[0];
	int i;
	for(i=1;i<arr.len;i++)
	{
		if(arr.A[i]>max)
			max=arr.A[i];
	}
	return max;
}

int Min(struct Array arr)
{
	int min=arr.A[0];
	int i;
	for(i=1;i<arr.len;i++)
	{
		if(arr.A[i]<min)
			min=arr.A[i];
	}
	return min;
}

int Sum(struct Array arr)
{
	int s=0;
	int i;
	for(i=0;i<arr.len;i++)
		s+=arr.A[i];
	return s;
}

float Avg(struct Array arr)
{
	return (float)Sum(arr)/arr.len;
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
	struct Array arr= {{2,4,6,7,3},10,5};
	display(arr);
	append(&arr, 12);
	display(arr);	
	insert(&arr,0,20);
	display(arr);
	deleteIndexEle(&arr,6);
	display(arr);
	Lsearch(&arr, 3);
	int min = Min(arr);
	printf("minimum no. is %d\n",min);
	
	
	return 0;	
}


