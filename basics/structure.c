#include<stdio.h>
struct Rectangle
{
	int length;
	int breadth;
};
int main()
{
	struct Rectangle s;
	struct Rectangle r = {10,5};
	r.length = 15;
	printf("Area of rectangle is %d\n", r.length*r.breadth);
}
