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

int binMul(int a, int b, int M) {
   int result = 0;
   while(b) {
      if(b & 1) {    // b % 2 == 1
         result = (result + a) % M;
      }
      a = (a + a) % M;
      b >>= 1;   // b /= 2
   }
   return result;
}

int main()
{
   fastread();
   
   
}
