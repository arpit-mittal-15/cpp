class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        vector<int> ans(adj.size());
        vector<bool> visited(adj.size(),false);
        
        
        queue<int> q;
        q.push(0);
        visited[0] = true;
        
        while(!q.empty()){
            int front = q.front();
            
            q.pop();
            
            ans.push_back(front);
            
            for(int i=0; i<adj[front].size(); i++){
                if(!visited[adj[front][i]]){
                    q.push(adj[front][i]);
                    visited[i] = true;
                }
            }
            
        }
        
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << endl;
        }
        
        return ans;
    }
};