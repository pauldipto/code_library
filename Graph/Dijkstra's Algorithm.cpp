#include <bits/stdc++.h>
using namespace std;
 
#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));

vector <int> dijkstra(int V, vector<vector<int>> adj[], int S) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
    vector<int> distance(V);
    for(int i = 0; i < V; i++) {
        distance[i] = 1e9;
    }
        
    distance[S] = 0;
    pq.push({0, S});
        
    while(!pq.empty()) {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();
            
        for(auto it : adj[node]) {
            int adjNode = it[0];
            int adjWeight = it[1];
                
            if(dis + adjWeight < distance[adjNode]) {
                distance[adjNode] = dis + adjWeight;
                pq.push({distance[adjNode], adjNode});
            }
        }
    }
    return distance;
}

int main() {
    fastread();
    
}
