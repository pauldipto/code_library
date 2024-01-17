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

bool check(int start, int n, vector<int> v[], int color[]) {
   queue<int> q;
   q.push(start);
   color[start] = 0;
   
   while(!q.empty()) {
      int node = q.front();
      q.pop();
      
      for(auto i : v[node]) {
         if(color[i] == -1) {
            color[i] = !color[node];
            q.push(i);
         }
         else if(color[i] == color[node]) {
            return false;
         }
      }
   }
   return true;
}

bool isBipartite(int n, vector<int> v[]) {
   int color[n];
   for(int i = 0; i < n; i++) {
      color[i] = -1;
   }
   
   for(int i = 0; i < n; i++) {
      if(color[i] == -1) {
         if(check(i, n, v, color) == false) {
            return false;
         }
      }
   }
   return true;
}

int main()
{
   fastread();
   
   int n, m;
   cin >> n >> m;
   
   vector<int> v[n];
   for(int i = 0; i < m; i++) {
      int v1, v2;
      cin >> v1 >> v2;
      v[v1].pb(v2);
      v[v2].pb(v1);
   }
   
   if(isBipartite(n, v)) {
      cout << "yes" << endl;
   }
   else {
      cout << "no" << endl;
   }
}
