	bool isBipartite(int V, vector<int>adj[]){
	    queue<pair<int, char>> q;
	     vector<char> vis(V,'N');
	     for(int i=0;i<V;i++)
	     {
	         if(vis[i]!= 'N') continue;
	         q.push({i,'R'});
	         vis[i] = 'R';
	         while(!q.empty())
	         {
	             auto pr = q.front();
	             q.pop();
	             for(auto ele : adj[pr.first])
	             {
	                 if(vis[ele]==pr.second) return false;
	                 if(vis[ele]!='N') continue;
	                 if(pr.second=='R')
	                 {
	                     q.push({ele, 'B'});
	                     vis[ele] = 'B';
	                 }
	                 else
	                 {
	                     q.push({ele, 'R'});
	                     vis[ele] = 'R';
	                 }
	             }
	         }
	     }
	     
	    return true;
	    
	}
