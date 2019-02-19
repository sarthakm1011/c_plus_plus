#include <stdlib.h>
#include <stdio.h>

struct Node {
	int data;
	struct Node *left,  *right;
};


struct Node *NewNode(int item) {
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(struct Node* root) {
	if (root != NULL) {
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
	}
	
}

struct Node* search(struct Node* root, int item) {
	if (root == NULL || root->data == item) {
		printf("Item found");
		return root;
	}
	if (root->data < item) { return search(root->left,item);}
	if (root->data > item) { return search(root->right,item);}
	printf("item not found");
	return root;
};

struct Node* insert(struct Node* root, int item) {
	if (root == NULL) { return(NewNode(item)); }
	if (root->data > item) { root-> left = insert(root->left,item); }
	else if (root->data < item) { root-> right =  insert(root->right,item); }
	return root;
};

int main() {
	struct Node* root = NULL;
	root = insert(root,50);
	insert(root,30);
	insert(root,20);
	insert(root,40);
	insert(root,60);
	insert(root,70);
	insert(root,80);
	
	inorder(root);

	search(root,60);
	
	return 0;
}
