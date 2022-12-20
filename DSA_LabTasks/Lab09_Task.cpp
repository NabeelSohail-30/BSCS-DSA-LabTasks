#include <iostream>

using namespace std;

// Definition of a tree node
struct Node {
	int data;
	Node* left;
	Node* right;
};

// Function to create a new tree node
Node* createNode(int data) {
	Node* node = new Node;
	node->data = data;
	node->left = node->right = nullptr;
	return node;
}

// Function to insert a new node into the tree
void insertNode(Node*& root, int data) {
	if (root == nullptr) {
		root = createNode(data);
		return;
	}
	if (data < root->data) {
		insertNode(root->left, data);
	}
	else {
		insertNode(root->right, data);
	}
}

int main() {
	// Create an empty tree
	Node* root = nullptr;

	// Insert the given sequence of data into the tree
	insertNode(root, 52);
	insertNode(root, 25);
	insertNode(root, 60);
	insertNode(root, 35);
	insertNode(root, 20);
	insertNode(root, 59);
	insertNode(root, 65);

	system("pause");
	return 0;
}
