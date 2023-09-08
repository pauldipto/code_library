
#include <bits/stdc++.h>
using namespace std;

#define mod                 1000000007
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int productOfPairs(vector<int> a, int n) {
    long long sum = 0;
    long long cum_sum = 0;
    for(int i = n -1; i >= 0; i--) {
        sum = (sum + ((a[i] * cum_sum) % mod)) % mod;
        cum_sum = (cum_sum + a[i]) % mod;
    }
    return sum % mod;
}
int main()
{
    fastread();
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v) {
        cin >> i;
    }
    cout << productOfPairs(v, n) << endl;
   
}
