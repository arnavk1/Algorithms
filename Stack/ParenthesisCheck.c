#include<stdio.h>
#include<stdlib.h>

struct Node
{
	char data;
	struct Node *next;
};

struct Node* push(struct Node *head, char ele)
{
	struct Node *newNode;
	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = ele;
	newNode->next = NULL;
	if(head == NULL)
		head = newNode;
	else
	{
		newNode->next = head;
		head = newNode;
	}
	return head;
}

struct Node* pop(struct Node* top)
{
	struct Node *t;
	if(top == NULL)
		printf("Stack is Empty\n");
	else
	{
		t = top;
		top = top->next;
		free(t);
	}
	return top;
}

int isBalanced(struct Node* head, char *exp)
{
	int i;
	for(i = 0; exp[i] != '\0'; i++)
	{
		if(exp[i] == '(')
			head = push(head, exp[i]);
		else if(exp[i] == ')')
		{
			if(head == NULL)
				return 0;
			head = pop(head);
		}
	}
	if(head == NULL)
		return 1;
	else
		return 0;
}
int main()
{
	struct Node *head;
	head = NULL;
	char *exp = "((a+b)*(b-a))";//((a+b)*(b-a))))
	printf("%d\n",isBalanced(head,exp));//1 for true and 0 for false
	return 0;
}




