
#include <bits/stdc++.h>
using namespace std;

#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));


vector<int> primeList;
void sieve(int n) {
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

int factorialDivisors(int n) {
    sieve(n);
    
    int result = 1;
    for(int i = 0; i < primeList.size(); i++) {
        int p = primeList[i];
        int power = 0;
        int k = n;
        while(k) {
            k /= p;
            power += k;
        }
        result *= (power + 1);
    }
    return result;
}

int main()
{
    fastread();
    
    int n;
    cin >> n;
    
    cout << factorialDivisors(n) << endl;
    
}
