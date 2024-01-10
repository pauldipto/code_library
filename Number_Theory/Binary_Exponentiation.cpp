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

int binPow(int a, int b, int M) {
   a %= M;
   int result = 1;
   while(b > 0) {
      if(b & 1) {  // (b % 2 == 1)
         result = (1LL * result * a) % M;
      }
      a = (1LL * a * a) % M;
      b >>= 1;  //  (b /= 2)
   }
   return result;
}

int main()
{
   fastread();
   
   
}
