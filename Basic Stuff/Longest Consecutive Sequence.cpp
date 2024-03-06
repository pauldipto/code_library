#include <bits/stdc++.h>
using namespace std;
 
#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
const ll MAX = 3e5 + 5;
const int N = 105;
int k[MAX], cost[MAX];


int main()
{
   fastread();
      
   int begin = -1, last = -1;
   int l = -1, r = -1;
   for(auto [x, c] : m) {  // map<int, int> m
      if(c < k) {
         continue;
      }
      if(last != x - 1) {
         begin = x;
      }
      last = x;
         
      if(l == -1 or x - begin > r - l) {
         l = begin;
         r = x;
      }
   }
   
   if(l == -1) {
      cout << -1 << endl;
   }
   else {
      cout << l << " " << r << endl;
   }
      
   ///////////////////////////////
      
  
  sort(c.begin(), c.end());  // vector<int> c
	int mx = 0;
	int lans = c[0], rans = c[0];
	int l = c[0];
	for(int i = 1; i < c.size(); i++) {
		if(c[i]-1 == c[i-1]) {
			if(c[i]-l > mx) {
				lans = l;
				rans = c[i];
				mx = c[i]-l;
			}
		}
		else {
			l = c[i];
		}
	}
	cout << lans << " " << rans << endl;  
   
   
   
}
