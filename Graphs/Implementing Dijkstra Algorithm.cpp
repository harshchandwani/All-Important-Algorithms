class Solution
{
	public:
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
       priority_queue<pair<int,int>, vector<pair<int,int>>, greater< pair<int,int> > >pq;
       vector<int>dis(V, INT_MAX);
       dis[S] = 0;
       pq.push({0, S});
       while(!pq.empty()){
           int dist = pq.top().first;
           int edge = pq.top().second;
           
           pq.pop();
           for(auto it: adj[edge]){
               int edgeWeight = it[1];
               int edgeNode = it[0];
               
               if(dist + edgeWeight < dis[edgeNode]){
                   dis[edgeNode] = dist + edgeWeight;
                   pq.push({dis[edgeNode], edgeNode});
               }
           }
           
       }
       return dis;
    }
};
