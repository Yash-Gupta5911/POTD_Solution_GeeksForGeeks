class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N, int M, int src) {
        vector<int> dist(N, -1);
        vector<vector<int>> adj(N);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        queue<int> q;
        q.push(src);
        dist[src] = 0;
        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int neighbor : adj[node]) {
                if (dist[neighbor] == -1) {
                    dist[neighbor] = dist[node] + 1;
                    q.push(neighbor);
                }
            }
        }

        return dist;
    }
};