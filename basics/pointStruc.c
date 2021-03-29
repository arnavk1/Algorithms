#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
	int length;
	int breadth;
};

int main()
{
	struct Rectangle *p;
	p = (struct Rectangle*)malloc(sizeof(struct Rectangle));
	p -> length = 10;
	p -> breadth = 5;
	printf("Area of rectangle is %d\n",p->length*p->breadth);
	return 0;
}
