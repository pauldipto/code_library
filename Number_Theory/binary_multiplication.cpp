
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a)           for (int i = 0; i < (a); i++)

#define ll                  long long
#define PI                  3.1415926535897932384626
#define mod                 1000000007
#define vi                  vector<int>
#define vll                 vector<long long>
#define vb                  vector<bool>
#define vs                  vector<string>
#define pii                 pair<int,int>
#define vpii                vector<pair<int, int> >
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));

bool isPrime(ll n) {
    if(n < 2) return 0;
    if(n <= 3) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3; 1LL * i * i <= n; i += 2) {
        if(!(n % i)) return 0;
    }
    
    return 1;
}

int main()
{
    fastread();
    
    int t;
    cin>>t;
    while(t--) {
        ll a,b; cin >> a >> b;
        ll d = a - b;
        ll s = a + b;
        if(d == 1 and isPrime(s) == true)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
        
      
    
    
    
    
        
}
