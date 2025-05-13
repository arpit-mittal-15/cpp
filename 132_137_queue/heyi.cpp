class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        int n=adj.size();
        vector<bool>visited(n, false);
        vector<int>bfs;
       queue<int>q;
       q.push(0);
       visited[0]=true;
       while(!q.empty()){
           int node= q.front();
           q.pop();
           bfs.push_back(node);
           for(int i=0;i<adj[node].size();i++){
               int nb=adj[node][i];
               if(!visited[nb]){//
                   q.push(nb);
                   visited[nb]=true;
                   
               }
           }
       }
       return bfs;
    }
};