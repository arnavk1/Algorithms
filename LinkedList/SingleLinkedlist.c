#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};


struct Node* create(struct Node *head, int data)
{
	struct Node *newnode,*temp;
	newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data 	= data;
	newnode->next = NULL;
	if(head == NULL)
	{
		head = newnode;
	}
	else
	{
		temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return head;
}

struct Node* insertFirst(struct Node *head, int data)
{
	struct Node *newnode;
	newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data 	= data;
	newnode->next = head;
	head = newnode;
	return head;
}

struct Node* deleteFirst(struct Node* head)
{
	struct Node *p;
	p = head;
	head = head->next;
	free(p);
	return head;
}

struct Node* deleteLast(struct Node* head)
{
	struct Node *p,*q;
	p = head;
	while(p->next!=NULL)
	{
		q = p;
		p = p->next;
	}
	free(p);
	q->next = NULL;
	return head;
}

struct Node* display(struct Node *head)
{
	struct Node *p;
	if(head == NULL)
	{
		printf("No elements\n");
	}
	else
	{
		p = head;
		while(p != NULL)
		{
			printf("%d\n",p->data);
			p = p->next;
		}
	}
	return head;
}

void main()
{
	struct Node *head;
	head = NULL;
	int ch,n;
	do
	{	
		printf("\nEnter Choice\n1. Create/Insert\n2. Display\n3. Insert at First\n4. Delete First\n5. Delete Rear\n6. Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	
				printf("enter no to insert\n");
				scanf("%d",&n);
				head = create(head, n);
				break;
			case 2:
				head = display(head);
				break;
			case 3:
				printf("enter no to insert\n");
				scanf("%d",&n);
				head = insertFirst(head, n);
				break;
			case 4:
				head = deleteFirst(head);
				break;
			case 5:
				head = deleteLast(head);
				break;
			case 6:
				exit(0);
				break;
		}
	}while(ch!=6);
}




