/*
https://practice.geeksforgeeks.org/problems/hamiltonian-path2522/1
*/




//  bool dfs(int N,int node,int cnt,vector<int>&vis,vector<int>graph[])
//     {
//         if(cnt==N)
//         return 1;
//         vis[node]=1;

//         for(auto i:graph[node])
//         {
//             if(!vis[i])
//             {
//                 if(dfs(N,i,cnt+1,vis,graph))
//                 return true;
//             }

//         }
//         vis[node]=0;
//         return false;

//     }
//     bool check(int N,int M,vector<vector<int>> Edges)
//     {
//         // code here
//         vector<int>graph[N+1];
//         for(auto i:Edges)
//         {
//             int u=i[0];
//             int v=i[1];
//             graph[u].push_back(v);
//             graph[v].push_back(u);

//         }

//         int i;
//         vector<int>vis(N+1,false);
//         for(i=1;i<=N;i++)
//         {
//             int cnt=1;

//             if(dfs(N,i,cnt,vis,graph))
//             return true;
//         }
//         return false;
//     }