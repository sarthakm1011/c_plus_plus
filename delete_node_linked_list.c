#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};


void delete_node(struct Node *head, struct Node *n) {
	
	if (head == n) { 
		if (head->next == NULL) {
			printf("List wil be empty if this is deleted");
		}
	
		head->data = head->next->data;
		n = head->next;
		head->next = head->next->next;	
		free(n);
		return;
	} 



	struct Node *prev = head;
	while(prev->next != NULL && prev->next != n) {
		prev = prev->next;
	}
	
	if (prev->next == NULL) { printf("Node cannot be found"); }
	
	prev->next = prev->next->next;
	free(n);
	
}


void insert(struct Node **head_ref, int item) {
	
	// inserting at the beginning
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = item;
	new_node->next = (*head_ref)->next;
	*head_ref = new_node;

}

void print(struct Node *head) {
	while(head->next != NULL) {
		printf("%d", head->data);
		head = head->next;
	}
	
}


int main() {
	struct Node *head = NULL;
	insert(&head,3);
	insert(&head,2);
	insert(&head,6);
	insert(&head,5);
	insert(&head,12);
	
	print(head);
	
	delete_node(head, head->next->next);

	print(head);
	
}
