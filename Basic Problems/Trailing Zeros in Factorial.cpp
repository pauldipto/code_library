
#include <bits/stdc++.h>
using namespace std;

#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));


int trailingZeros(int n) {
    int ans = 0;
    while(n) {
        n /= 5;
        ans += n;
    }
    
    return ans;
}

int main()
{
    fastread();
    
    
    
}
