#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int size;
	int top;
	int *s;
};

void create(struct stack *st)
{
	printf("Enter size\n");
	scanf("%d",&st->size);
	st->top = -1;
	st->s = (int *)malloc(st->size*sizeof(int));
}

void display(struct stack st)
{
	int x = st.top;
	printf("Stack Elements are:\n");
	while(x != -1)
	{
		printf("%d\n",st.s[x]);
		x--;
	}
}

void push(struct stack *st, int ele)
{
	if(st->top == st->size-1)
		printf("Stack Overflow\n");
	else
	{
		st->top++;
		st->s[st->top] = ele;
	}
}

void pop(struct stack *st)
{
	if(st->top == -1)
		printf("Stack underflow\n");
	else
	{
		printf("%d is popped element\n",st->s[st->top]);
		st->top--;
	}
}

void peek(struct stack st, int pos)
{
	if(st.top-pos+1 < 0)
		printf("Invalid Position\n");
	else
	{
		printf("Element at position %d is %d\n",pos,st.s[st.top-pos+1]);
	}
}

int stackTop(struct stack st)
{
	if(st.top == -1)
		return -1;
	else
		return st.s[st.top];
}

int isEmpty(struct stack st)
{
	if(st.top == -1)
		return 1;
	return 0;
}

int isFull(struct stack st)
{
	return st.top == st.size-1;
}
void main()
{
	struct stack st;
	create(&st);
	push(&st,10);
	push(&st,20);
	push(&st,30);
	push(&st,40);
	peek(st,2);
	display(st);
}



