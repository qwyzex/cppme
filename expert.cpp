#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

typedef pair<int, int> pii;

const int INF = INT_MAX;

/**
 * Runs Dijkstra's algorithm on a graph to find the shortest paths from a given
 * starting node to all other nodes in the graph.
 *
 * @param V the number of nodes in the graph
 * @param adj the adjacency list of the graph. Each element is a vector of
 *            pairs (v, w), where v is the index of the adjacent node and w is
 *            the weight of the edge between the current node and v.
 * @param start the index of the starting node
 * @param dist a vector of length V where the i-th element is the shortest
 *             distance from the starting node to node i. If no path exists,
 *             dist[i] is set to INF.
 */
void dijkstra(int V, vector<vector<pii>>& adj, int start, vector<int>& dist) {
	priority_queue<pii, vector<pii>, greater<pii>> pq;
	pq.push({0, start});
	dist[start] = 0;

	while (!pq.empty()) {
		int u = pq.top().second;
		int d = pq.top().first;
		pq.pop();

		if (d > dist[u]) continue;

		for (auto& neighbor : adj[u]) {
			int v = neighbor.first;
			int weight = neighbor.second;

			if (dist[u] + weight < dist[v]) {
				dist[v] = dist[u] + weight;
				pq.push({dist[v], v});
			}
		}
	}
}

/**
 * Reads in a graph in the following format:
 *
 * V E
 * a b
 * x_1 y_1 z_1
 * ...
 * x_E y_E z_E
 *
 * Where V is the number of nodes, and E is the number of edges.
 * The graph is undirected and unweighted.
 *
 * a and b are the nodes between which the shortest path is to be found.
 *
 * Prints the shortest path between a and b.
 *
 * @return 0 on success.
 */
int main() {
	int V, E, a, b;
	cin >> V >> E >> a >> b;

	vector<vector<pii>> adj(V + 1);

	for (int i = 0; i < E; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		adj[x].push_back({y, z});
		adj[y].push_back({x, z});
	}

	vector<int> dist(V + 1, INF);

	dijkstra(V, adj, a, dist);

	cout << dist[b] << endl;

	return 0;
}
