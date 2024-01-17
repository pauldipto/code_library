#include <bits/stdc++.h>
using namespace std;
 
#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
const ll MAX = 1e12;
const int N = 105;

void dfs(int node, vector<int> v[], vector<int> &ls, int vis[]) {
   vis[node] = 1;
   ls.pb(node);
   
   for(auto i : v[node]) {
      if(!vis[i]) {
         dfs(i, v, ls, vis);
      }
   }
}

int main()
{
   fastread();
   
   int n, m;
   cin >> n >> m;
   
   vector<int> v[n + 1];
   for(int i = 0; i < m; i++) {
      int v1, v2;
      cin >> v1 >> v2;
      v[v1].pb(v2);
      v[v2].pb(v1);
   }
   
   int num;
   cin >> num;
   queue<int> q;
   q.push(num);
   
   int vis[n + 1] = {0};
   vis[num] = 1;
   
   int dis[n + 1] = {0};
   dis[num] = 0;
   
   int par[n + 1] = {0};
   par[num] = num;
   
   vector<int> bfs;
   while(!q.empty()) {
      int node = q.front();
      q.pop();
      bfs.pb(node);
      
      for(auto i : v[node]) {
         if(!vis[i]) {
            vis[i] = 1;
            q.push(i);
            dis[i] = dis[node] + 1;
            par[i] = node;
         }
      }
   }
   
   int a = 8;
   while(a != 1) {
      cout << a << " ";
      a = par[a];
   }
   cout << 1 << endl;
   
}
