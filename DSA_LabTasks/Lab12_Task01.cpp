/*
	Lab 12 Task 01
	Implementation of Graph using Adjacency Matrix
*/

#include <iostream>
#include <vector>

using namespace std;

const int MAX_VERTICES = 100;

int adjacency_matrix[MAX_VERTICES][MAX_VERTICES];
int num_vertices;

void add_edge(int from, int to) {
	adjacency_matrix[from][to] = 1;
}

void remove_edge(int from, int to) {
	adjacency_matrix[from][to] = 0;
}

bool has_edge(int from, int to) {
	return adjacency_matrix[from][to] == 1;
}

int main() {
	num_vertices = 5;

	add_edge(0, 1);
	add_edge(0, 2);
	add_edge(1, 2);
	add_edge(2, 3);
	add_edge(3, 4);

	cout << has_edge(0, 1) << endl; // prints 1
	cout << has_edge(0, 3) << endl; // prints 0

	remove_edge(0, 1);
	cout << has_edge(0, 1) << endl; // prints 0

	system("pause");

	return 0;
}