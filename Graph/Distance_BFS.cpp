
#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));


const int N = 1e3 + 10;

vector<vector<int>> nearest(vector<vector<int>>grid) {
   
   int n = grid.size();
   int m = grid[0].size();
   vector<vector<int>> vis(n, vector<int>(m, 0));
   vector<vector<int>> dis(n, vector<int>(m, 0));
   queue<pair<pair<int, int>, int>> q;
   
   for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
         if(grid[i][j] == 1) {
            vis[i][j] = 1;
            q.push({{i, j}, 0});
         }
         else {
            vis[i][j] = 0;
         }
      }
   }
   
   int delrow[] = {-1, 0, +1, 0};
   int delcol[] = {0, +1, 0, -1};
   
   while(!q.empty()) {
      int row = q.front().first.first;
      int col = q.front().first.second;
      int steps = q.front().second;
      q.pop();
      dis[row][col] = steps;
      
      for(int i = 0; i < 4; i++) {
         int nrow = row + delrow[i];
         int ncol = col + delcol[i];
         if(nrow >= 0 and nrow < n and ncol >= 0 and ncol < n and vis[nrow][ncol] == 0) {
            vis[nrow][ncol] = 1;
            q.push({{nrow, ncol}, steps + 1});
         }
      }
   }
   return dis;
}

int main()
{
   fastread();
   
   int n, m;
   cin >> n >> m;
   vector<vector<int>> grid(n, vector<int>(m, -1));
   for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
         cin >> grid[i][j];
      }
   }
   
   vector<vector<int>> ans = nearest(grid);
   for(auto i : ans) {
      for(auto j : i) {
         cout << j << " ";
      }
      cout << endl;
   }
   
}
