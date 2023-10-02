
#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));


int lowerBound(vector<int> &v, int n, int key) {
   int low = 0;
   int high = n - 1;
   int ans = n;
   
   while(low <= high) {
      int mid = low + (high - low) / 2;
      if(v[mid] >= key) {
         ans = mid;
         high = mid - 1;
      }
      else {
         low = mid + 1;
      }
   }
   
   return ans;
}

int upperBound(vector<int> &v, int n, int key) {
   int low = 0;
   int high = n - 1;
   int ans = n;
   while(low <= high) {
      int mid = low + (high - low) / 2;
      if(v[mid] > key) {
         ans = mid;
         high = mid - 1;
      }
      else {
         low = mid + 1;
      }
   }
   return ans;
}

int main()
{
   int n;
   cin >> n;
   
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
      cin >> v[i];
   }
   
   int key;
   cin >> key;
   
   cout << lowerBound(v, n, key) << endl;
   cout << upperBound(v, n, key) << endl;

}
