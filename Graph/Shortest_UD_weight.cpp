#include <bits/stdc++.h>
using namespace std;
 
#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));

vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src) {
    vector<int> adj[N];
    for(auto it : edges) {
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
        
    int dis[N];
    for(int i = 0; i < N; i++) {
        dis[i] = 1e9;
    }
        
    dis[src] = 0;
    queue<int> q;
    q.push(src);
    while(!q.empty()) {
        int node = q.front();
        q.pop();
            
        for(auto it : adj[node]) {
            if(dis[node] + 1 < dis[it]) {
                dis[it] = dis[node] + 1;
                q.push(it);
            }
        }
    }
        
    vector<int> ans(N, -1);
    for(int i = 0; i < N; i++) {
        if(dis[i] != 1e9) {
            ans[i] = dis[i];
        }
    }
        
    return ans;
}

int main() {
    
    fastread();
    
    
}
