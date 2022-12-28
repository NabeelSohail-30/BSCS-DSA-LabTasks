#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

// This is the adjacency list representation of the graph.
// The keys in the map are the vertices, and the values are
// the lists of vertices that are adjacent to the key vertex.
unordered_map<int, vector<int>> graph;

// This array will be used to track which vertices have been visited.
bool visited[100];

void dfs(int current) {
	visited[current] = true;
	cout << current << " ";

	for (int neighbor : graph[current]) {
		if (!visited[neighbor]) {
			dfs(neighbor);
		}
	}
}

int main() {
	// Add some edges to the graph.
	graph[1].push_back(2);
	graph[1].push_back(3);
	graph[2].push_back(4);
	graph[3].push_back(4);
	graph[3].push_back(5);
	graph[5].push_back(6);

	// Perform the traversal starting from vertex 1.
	dfs(1);

	system("pause");

	return 0;
}