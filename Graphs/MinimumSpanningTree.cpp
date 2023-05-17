class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]){
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        q.push({0,0});
        vector<int> vis(V,0);
        int sum=0;
        while(!q.empty())
        {
            auto it=q.top();
            q.pop();
            int wt=it.first;
            int node=it.second;
            if(vis[node]==1) continue;
            vis[node]=1;
            sum+=wt;
            for(auto iter:adj[node])
            {
                int nodeA=iter[0];
                int wtA=iter[1];
                if(!vis[nodeA])
                {
                    q.push({wtA,nodeA});
                }
            }
        }
        return sum;
    }
};
