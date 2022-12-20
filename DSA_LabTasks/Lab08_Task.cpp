#include <iostream>
using namespace std;

const int N = 6;  // Size of the queue

// Queue data structure
struct Queue {
	int data[N];  // Array to store the queue elements
	int front;  // Index of the front element
	int rear;  // Index of the rear element
};

// Initializes the queue
void init(Queue &q) {
	q.front = 0;
	q.rear = 0;
}

// Returns true if the queue is empty, false otherwise
bool isEmpty(Queue q) {
	return q.front == q.rear;
}

// Returns true if the queue is full, false otherwise
bool isFull(Queue q) {
	return (q.rear + 1) % N == q.front;
}

// Enqueues an element to the queue
void enqueue(Queue &q, int x) {
	if (isFull(q)) {
		cout << "Queue is full!" << endl;
		return;
	}
	q.data[q.rear] = x;
	q.rear = (q.rear + 1) % N;
}

// Dequeues an element from the queue
void dequeue(Queue &q) {
	if (isEmpty(q)) {
		cout << "Queue is empty!" << endl;
		return;
	}
	q.front = (q.front + 1) % N;
}

// Displays the elements of the queue
void display(Queue q) {
	if (isEmpty(q)) {
		cout << "Queue is empty!" << endl;
		return;
	}
	for (int i = q.front; i != q.rear; i = (i + 1) % N) {
		cout << q.data[i] << " ";
	}
	cout << endl;
}

int main() {
	Queue q;
	init(q);

	// Test the enqueue, dequeue, and display functions
	enqueue(q, 5);
	enqueue(q, 2);
	enqueue(q, 3);
	dequeue(q);
	dequeue(q);
	enqueue(q, 6);
	enqueue(q, 3);
	display(q);

	system("pause");
	return 0;
}
