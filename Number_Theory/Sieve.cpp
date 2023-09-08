
#include <bits/stdc++.h>
using namespace std;

#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));


const int n = 1e7 + 9;
vector<int> primeList;
void sieve() {
    vector<bool> isPrime(n, 1);
    
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i * i <= n; i++) {
        if(isPrime[i] == true) {
            for(int p = 2 * i; p <= n; p += i) {
                isPrime[p] = false;
            }
        }
    }
    
    for(int i = 2; i <= n; i++) {
        if(isPrime[i]) {
            primeList.push_back(i);
        }
    }
}


int main()
{
    fastread();
    
    sieve();
   
}
