#include <iostream>

using namespace std;

// Declare node struct
struct Node {
	int data;
	Node* left;
	Node* right;
};

// Create a new node
Node* createNode(int data) {
	Node* node = new Node;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

// Print tree nodes in pre-order
void preOrder(Node* root) {
	if (root == NULL) return;
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

// Print tree nodes in in-order
void inOrder(Node* root) {
	if (root == NULL) return;
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

// Print tree nodes in post-order
void postOrder(Node* root) {
	if (root == NULL) return;
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

int main() {
	// Create tree
	Node* root = createNode(52);
	root->left = createNode(25);
	root->right = createNode(60);
	root->left->left = createNode(20);
	root->left->right = createNode(35);
	root->right->left = createNode(59);
	root->right->right = createNode(65);

	// Print nodes in pre-order
	cout << "Pre-order: ";
	preOrder(root);
	cout << endl;

	// Print nodes in in-order
	cout << "In-order: ";
	inOrder(root);
	cout << endl;

	// Print nodes in post-order
	cout << "Post-order: ";
	postOrder(root);
	cout << endl;

	system("pause");
	return 0;
}