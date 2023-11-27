
#include <bits/stdc++.h>
using namespace std;
 
#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
const ll MAX = 1e10;
const int N = 5e4 + 9;

vector<int> primeList;
void sieve() {
    vector<bool> isPrime(N, 1);
    
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i * i <= N; i++) {
        if(isPrime[i] == true) {
            for(int p = 2 * i; p <= N; p += i) {
                isPrime[p] = false;
            }
        }
    }
    
    for(int i = 2; i <= N; i++) {
        if(isPrime[i]) {
            primeList.pb(i);
        }
    }
}

int legend(int n, int it) {
    int power = 0;
    while(n) {
        n /= it;
        power += n;
    }
    return power;
}

int main()
{
    fastread();
    
    sieve();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int num = 0;
        int divisors = 1;
        for(auto it : primeList) {
            if(it > n) {
                break;
            }
            else if(it <= n) {
                num = legend(n, it);
            }
            divisors = (1LL * divisors * (num + 1) ) % mod;
        }
        
        cout << divisors << endl;
        
    }
    
}
