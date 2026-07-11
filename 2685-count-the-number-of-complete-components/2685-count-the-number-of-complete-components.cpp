class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, int& nodes, int& edges) {
        visited[node] = true;
        nodes++;

        for (int neigh : adj[node]) {
            edges++; // count degree
            if (!visited[neigh]) {
                dfs(neigh, adj, visited, nodes, edges);
            }
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        
        // Build graph
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> visited(n, false);
        int complete = 0;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                int nodes = 0;
                int edgeCount = 0;

                dfs(i, adj, visited, nodes, edgeCount);

                edgeCount /= 2; // since counted twice

                if (edgeCount == (nodes * (nodes - 1)) / 2) {
                    complete++;
                }
            }
        }

        return complete;
    }
};