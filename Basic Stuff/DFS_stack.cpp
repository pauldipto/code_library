
#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));


const int N = 1e3 + 10;
// vector<pair<int, int> > graph;
int main()
{
   int n, m;
   cin >> n >> m;
   vector<int> v[n + 1];
   
   for(int i = 0; i < n; i++) {
      int v1, v2;
      cin >> v1 >> v2;
      
      v[v1].pb(v2);
      v[v2].pb(v1);
   }
   
   int num;
   cin >> num;
   
   int vis[n + 1] = {0};
   vis[num] = 1;
   stack<int> s;
   s.push(num);
   vector<int> dfs;
   
   while(!s.empty()) {
      int node = s.top();
      s.pop();
      dfs.pb(node);
      
      for(auto i : v[node]) {
         if(!vis[i]) {
            vis[i] = 1;
            s.push(i);
         }
      }
   }
   
   for(auto i : dfs) {
      cout << i << " ";
   }
   
}
