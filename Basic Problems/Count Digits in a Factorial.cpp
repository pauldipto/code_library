
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


int calDigit(int n) {
    
    if(n < 0) {
        return 0;
    }
    if(n <= 1) {
        return 1;
    }
    
    double digits = 0;
    for(int i = 2; i <= n; i++) {
        digits += log10(i);
    }
    
    return floor(digits) + 1;
}

int main()
{
    fastread();
    
    int n;
    cin >> n;
    
    cout << calDigit(n) << endl;
    
}
