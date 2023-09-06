
#include <bits/stdc++.h>
using namespace std;

#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));




int largestPowerOfK(int n, int k) {
    
    map<int, int> factors;
    for(int i = 2; i * i <= k; i++) {
        while(k % i == 0) {
            factors[i]++;
            k /= i;
        }
    }
    if(k > 1)
    factors[k]++;
    
    int ans = INT_MAX;
    for(auto it : factors) {
        int prime = it.first;
        int count = it.second;
        int power = 0;
        int k = n;
        while(k) {
            k /= prime;
            power += k;
        }
        ans = min(ans, power / count);
    }
    return ans;
}

int main()
{
    fastread();
    
    int n, k;
    cin >> n >> k;
    
    cout << largestPowerOfK(n, k) << endl;
    
     
    
}
