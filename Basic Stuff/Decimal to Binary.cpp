
#include <bits/stdc++.h>
using namespace std;

#define N                   1e7 + 10
#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));


int main()
{
    fastread();
    
    int n;
    cin >> n;
    
    int ans = 0;
    int i = 0;
    while(n != 0) {
        int bit = n & 1;
        ans += (bit * pow(10, i));
        n >>= 1;
        i++;
    }
    
    cout << ans << endl;
    
    for(int i = 10; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
    
    
    
    
    
}
