#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

class LinkedList {
private:
	Node* head;

public:
	LinkedList() { head = NULL; }

	void insert_at_end(int data) {
		Node* new_node = new Node;
		new_node->data = data;
		new_node->next = NULL;
		if (head == NULL) {
			head = new_node;
		}
		else {
			Node* current = head;
			while (current->next != NULL) {
				current = current->next;
			}
			current->next = new_node;
		}
		cout << "Element added at the end" << endl;
	}

	void delete_from_end() {
		if (head == NULL) {
			cout << "List is empty" << endl;
			return;
		}
		if (head->next == NULL) {
			delete head;
			head = NULL;
		}
		else {
			Node* current = head;
			while (current->next->next != NULL) {
				current = current->next;
			}
			delete current->next;
			current->next = NULL;
		}
		cout << "Element deleted from the end" << endl;
	}

	bool search(int data) {
		Node* current = head;
		while (current != NULL) {
			if (current->data == data) {
				return true;
			}
			current = current->next;
		}
		return false;
	}

	void display_list() {
		Node* current = head;
		while (current != NULL) {
			cout << current->data << " ";
			current = current->next;
		}
		cout << endl;
	}

	bool is_empty() { return head == NULL; }
};

int main() {
	LinkedList list;
	int choice;
	bool exit = false;
	
	while (!exit) {
		cout << endl << endl;
		cout << "------------------------" << endl;
		cout << "1. Insert an element at the end" << endl;
		cout << "2. Delete an element from end" << endl;
		cout << "3. Search an element" << endl;
		cout << "4. Display List" << endl;
		cout << "5. Is List Empty" << endl;
		cout << "6. Exit" << endl << endl;
		cout << "Please Enter Your Choice: ";
		cin >> choice;

		cout << endl << endl;
		
		if (choice == 1) {
			int data;
			cout << "Enter data: ";
			cin >> data;
			list.insert_at_end(data);
		}
		else if (choice == 2) {
			list.delete_from_end();
		}
		else if (choice == 3) {
			int data;
			cout << "Enter data: ";
			cin >> data;
			if (list.search(data)) {
				cout << "Element found" << endl;
			}
			else {
				cout << "Element not found" << endl;
			}
		}
		else if (choice == 4) {
			list.display_list();
		}
		else if (choice == 5) {
			if (list.is_empty)
				cout << "List is empty" << endl;
			else
				cout << "List is not empty" << endl;
		}
		else if (choice == 6) {
			exit = true;
		}
	}

	system("pause");
	return 0;
}