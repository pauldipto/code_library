
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
        int digit = n % 10;
        if(digit == 1) {
            ans += pow(2, i);
        }
        n /= 10;
        i++;
    }
    
    cout << ans << endl;

    //for strings

    string s;
    cin >> s;
    
    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
        int bit = s[i] - '0';
        ans = ans * 2 + bit;
    }
    
    cout << ans << endl;
    
}
