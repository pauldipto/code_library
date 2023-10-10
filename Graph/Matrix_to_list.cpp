
#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));


const int N = 1e3 + 10;



int main()
{
   
   // matrix to list
   // n = size of the matrix
   vector<vector<int> > matrix;
   vector<int> ls[n];
   
   for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
         if(matrix[i][j] == 1 and i != j) {
            ls[i].pb(j);
            ls[j].pb(i);
         }
      }
   }
   
   
}
