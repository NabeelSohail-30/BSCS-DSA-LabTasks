#include <iostream>
#include <vector>

using namespace std;

const int MAX_VERTICES = 100;

vector<int> adjacency_list[MAX_VERTICES];
int num_vertices;

void add_edge(int from, int to) {
	adjacency_list[from].push_back(to);
}

void remove_edge(int from, int to) {
	// Find the index of the edge to remove
	int index = -1;
	for (int i = 0; i < adjacency_list[from].size(); i++) {
		if (adjacency_list[from][i] == to) {
			index = i;
			break;
		}
	}

	// Remove the edge if it was found
	if (index != -1) {
		adjacency_list[from].erase(adjacency_list[from].begin() + index);
	}
}

bool has_edge(int from, int to) {
	for (int i = 0; i < adjacency_list[from].size(); i++) {
		if (adjacency_list[from][i] == to) {
			return true;
		}
	}
	return false;
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
	cout << has_edge(0, 1) << endl;

	system("pause");
	return 0;
}