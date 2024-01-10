#include <bits/stdc++.h>
using namespace std;
 
#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
const ll MAX = 1e12;
const int N = 5e5 + 9;
int spf[N];

int main()
{
   fastread();
   
   int n;
   cin >> n;
   
   map<int, int> factors;
   for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) {
         while(n % i == 0) {
            factors[i]++;
            n /= i;
         }
      }
   }
   if(n > 1) {
      factors[n]++;
   }
   
   for(auto [p, e] : factors) {
      cout << p << " " << e << endl;
   }
    
}
