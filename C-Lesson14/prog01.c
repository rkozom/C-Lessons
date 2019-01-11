#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node
{
	int data;
	Node* next;
} Node;

Node* start = NULL;

Node* CreateList(Node*);
Node* CreateTestList(Node*);
void DisplayList(Node*);
Node* InsertEnd(Node*);
Node* DeleteBeg(Node*);
Node* DeleteList(Node*);

int main()
{
	start = CreateTestList(start);

	DisplayList(start);

	DeleteList(start);

	return 0;
}

Node* CreateList(Node* start)
{
	Node* newNode, *ptr;
	int num;
	printf("\n Enter -1 to end");
	printf("\n Enter the data: ");
	scanf("%d", &num);
	while (num != -1) {
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = num;

		if (start == NULL) {
			newNode->next = NULL;
			start = newNode;
		}
		else {
			ptr = start;
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = newNode;
			newNode->next = NULL;
		}
		printf("\n Enter the data: ");
		scanf("%d", &num);
	}
	return start;
}

Node* CreateTestList(Node* start)
{
	for (int i = 0; i < 100; i++)
	{
		Node* newNode =  (Node*)malloc(sizeof(Node));
		newNode->data = i;
		newNode->next = NULL;

		if (start == NULL) {
			start = newNode;		
		}
		else {
			Node* ptr = start;
			while (ptr->next != NULL)
				ptr  = ptr->next;
			ptr->next = newNode;
		}
	}
	return start;
}

Node* DeleteList(Node* start)
{
	Node* ptr;
	if (start != NULL) {
		ptr = start;
		while (ptr != NULL) {
			printf("\n %d is to be deleted next", ptr->data);
			start = DeleteBeg(ptr);
			ptr = start;
		}
	}
	return start;
}

Node* DeleteBeg(Node* start)
{
	Node* ptr;
	ptr = start;
	start  = start->next;
	free(ptr);
	return start;
}

void DisplayList(Node* start) {
	if (start == NULL)
		return;
	
	Node* ptr = start;
	while (ptr != NULL) {
		printf("%d ", ptr->data);
		ptr = ptr->next; 
	}
}

