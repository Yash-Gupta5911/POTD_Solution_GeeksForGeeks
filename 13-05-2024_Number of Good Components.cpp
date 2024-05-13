
class Solution {
  public:
  void dfs(int node, vector<int> adj[], int &edge, int &vertex, vector<int> &vis){
      vis[node]=1;
      vertex++;
      edge+=adj[node].size();
      
      for(auto it: adj[node]){
          if(!vis[it])
          dfs(it, adj, edge, vertex, vis);
      }
  }
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        // code here
        int good=0;
        vector<int> adj[v+1];
        for(int i=0; i<e; i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<int> vis(v+1, 0);
        for(int i=1; i<=v; i++){
            if(!vis[i]){
                int edge=0;
                int vertex=0;
                dfs(i, adj, edge, vertex, vis);
                
                edge=edge/2;
                if(edge==vertex*(vertex-1)/2)
                good++;
            }
        }
        return good;
    }
};

