#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *left, *right;
};


struct Node *NewNode(int item) {
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
};

void inorder(struct Node *root) {
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}

struct Node* insert(struct Node* node, int item) {
	if (node == NULL) return NewNode(item);
	
	if (item < node->data) {
		node->left = insert(node->left, item);
	}
	else if (item > node->data) {
		node->right = insert(node->right, item);
	}

	return node;
};


int main() 
{ 
    /* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */
  
    struct Node *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
   
    // print inoder traversal of the BST 
    inorder(root); 
   
    return 0; 
} 
