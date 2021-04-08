#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node* create(struct Node *head, int n)
{
	struct Node *node,*temp;
	node = (struct Node *)malloc(sizeof(struct Node));
	node->data = n;
	node->next = NULL;
	int i;
	if(head == NULL)
	{
		head = node;
	}
	else
	{
		temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	return head;
}

void display(struct Node *p)
{
	while(p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;
	}
}


int main()
{
	struct Node *head;
	head = NULL;
	head = create(head, 5);
	head = create(head, 4);
	head = create(head, 3);
	head = create(head, 2);
	head = create(head, 1);
	display(head);

	return 0;
}



