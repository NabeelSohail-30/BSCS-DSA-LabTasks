#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

// This is the adjacency list representation of the graph.
// The keys in the map are the vertices, and the values are
// the lists of vertices that are adjacent to the key vertex.
unordered_map<int, vector<int>> graph;

// This array will be used to track which vertices have been visited.
bool visited[100];

void bfs(int start) {
	queue<int> q;
	q.push(start);
	visited[start] = true;

	while (!q.empty()) {
		int current = q.front();
		q.pop();

		cout << current << " ";

		for (int neighbor : graph[current]) {
			if (!visited[neighbor]) {
				q.push(neighbor);
				visited[neighbor] = true;
			}
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
	bfs(1);

	system("pause");

	return 0;
}