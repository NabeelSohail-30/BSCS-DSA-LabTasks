/*
	Lab 07 Task
	Array Based Implementation of Stack
*/

#include <iostream>

using namespace std;

const int N = 6; // stack size

				 // stack structure
struct Stack {
	int top;
	int data[N];
};

// push an element onto the stack
void push(Stack &stack, int value) {
	if (stack.top == N - 1) {
		cout << "Error: stack overflow" << endl;
	}
	else {
		stack.top++;
		stack.data[stack.top] = value;
	}
}

// pop an element from the stack
void pop(Stack &stack) {
	if (stack.top == -1) {
		cout << "Error: stack underflow" << endl;
	}
	else {
		stack.top--;
	}
}

// display all elements in the stack
void display(Stack stack) {
	if (stack.top == -1) {
		cout << "Error: stack is empty" << endl;
	}
	else {
		cout << "Stack elements: ";
		for (int i = 0; i <= stack.top; i++) {
			cout << stack.data[i] << " ";
		}
		cout << endl;
	}
}

// return the top element of the stack
int top(Stack stack) {
	if (stack.top == -1) {
		cout << "Error: stack is empty" << endl;
		return -1;
	}
	else {
		return stack.data[stack.top];
	}
}

int main() {
	Stack stack;
	stack.top = -1; // initialize stack

	// test stack operations
	push(stack, 5);
	push(stack, 2);
	push(stack, 3);
	pop(stack);
	push(stack, 6);
	push(stack, 9);
	push(stack, 3);
	display(stack);
	cout << "Top element: " << top(stack) << endl;

	system("pause");
	return 0;
}
