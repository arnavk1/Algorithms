#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node* push(struct Node *head, int ele)
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

void display(struct Node* head)
{
	struct Node* t;
	if(head == NULL)
		printf("Stack is Empty\n");
	else
	{
		t = head;
		while(t != NULL)
		{
			printf("%d\n",t->data);
			t = t->next;
		}
	}
}

int main()
{
	struct Node *head;
	head = NULL;
	head = push(head, 10);
	head = push(head, 20);
	head = push(head, 30);
	display(head);
	head = pop(head);
	display(head);
	return 0;
}




