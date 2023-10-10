
#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));


const int N = 1e3 + 10;

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
   
   int vis[n + 1] = {0};
   int node = num;
   vector<int> ls;
   
   dfs(node, v, ls, vis);
   for(auto i : ls) {
      cout << i << " ";
   }
}
