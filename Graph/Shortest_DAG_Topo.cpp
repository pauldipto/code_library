#include <bits/stdc++.h>
using namespace std;
 
#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void topoSort(int node, int vis[], stack<int>& st, vector<pair<int, int>> adj[]) {
    vis[node] = 1;
        
    for(auto it : adj[node]) {
        int v = it.first;
        if(!vis[v]) {
            topoSort(v, vis, st, adj);
        }
    }
        
    st.push(node);
}

vector<int> shortestPath(int N,int M, vector<vector<int>>& edges) {
    vector<pair<int, int>> adj[N];
    for(int i = 0; i < M; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        adj[u].push_back(make_pair(v, wt));
    }
         
    int vis[N] = {0};
    stack<int> st;
    for(int i = 0; i < N; i++) {
        if(!vis[i]) {
            topoSort(i, vis, st, adj);
        }
    }
        
    vector<int> dis(N);
    for(int i = 0; i < N; i++) {
        dis[i] = 1e9;
    }
        
    dis[0] = 0;
    while(!st.empty()) {
        int node = st.top();
        st.pop();
            
        for(auto it : adj[node]) {
            int v = it.first;
            int wt = it.second;
                
            if(dis[node] + wt < dis[v]) {
                dis[v] = dis[node] + wt;
            }
        }
    }
        
    for(int i = 0; i < N; i++) {
        if(dis[i] == 1e9) {
            dis[i] = -1;
        }
    }
        
    return dis;
}

int main()
{
   fastread();
   
}
