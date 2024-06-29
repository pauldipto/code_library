#include <bits/stdc++.h>
using namespace std;
 
#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));

bool dfsCheck(int node, vector<int> adj[], int vis[], int pathVis[]) {
    vis[node] = 1;
    pathVis[node] = 1;
        
    for(auto it : adj[node]) {
        if(!vis[it]) {
            if(dfsCheck(it, adj, vis, pathVis) == true) {
                return true;
            }
        }
        else if(pathVis[it]) {
            return true;
        }
    }
    pathVis[node] = 0;
    return false;
}

bool isCyclic(int V, vector<int> adj[]) {
    int vis[V] = {0};
    int pathVis[V] = {0};
        
    for(int i = 0; i < V; i++) {
        if(!vis[i]) {
            if(dfsCheck(i, adj, vis, pathVis) == true) {
                return true;
            }
        }
    }
    return false;
}

int main()
{
   fastread();
  
}
