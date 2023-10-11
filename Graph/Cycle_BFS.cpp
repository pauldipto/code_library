
#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));


const int N = 1e3 + 10;

bool detect(int source, vector<int> adj[], int vis[]) {
   vis[source] = 1;
   queue<pair<int, int> > q;
   q.push(mp(source, -1));
   
   while(!q.empty()) {
      int node = q.front().first;
      int parent = q.front().second;
      q.pop();
      
      for(auto i : adj[node]) {
         if(!vis[i]) {
            vis[i] = 1;
            q.push(mp(i, node));
         }
         else if(parent != i) {
            return true;
         }
      }  
   }
   return false;
}

bool isCycle(int n, vector<int> adj[]) {
   int vis[n] = {0};
   for(int i = 0; i < n; i++) {
      if(!vis[i]) {
         if(detect(i, adj, vis)) {
            return true;
         }
      }
   }
   return false;
}

int main()
{
   int n, m;
   cin >> n >> m;
   vector<int> adj[n + 1];
   
   for(int i = 0; i < m; i++) {
      int v1, v2;
      cin >> v1 >> v2;
      
      adj[v1].pb(v2);
      adj[v2].pb(v1);
   }
   
   if(isCycle(n, adj)) {
      cout << "yes" << endl;
   }
   else {
      cout << "no" << endl;
   }
   
   
}
