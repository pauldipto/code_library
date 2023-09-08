
#include <bits/stdc++.h>
using namespace std;

#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));



const int N = 1e5 + 9;
int spf[N];

void ok(int n) {
    if(n > 3 and (n % 2 != 0)) {
        cout << -1 << endl;
        return;
    }
    else {
        for( int i = 2; i < n; i++) {
            if(spf[i] == i and spf[n - i] == n - i) {
                cout << i << " " << n - i << endl;
                return;
            }
        }
    }
}



int main()
{
    fastread();

  
    for(int i = 2; i < N; i++) {
        spf[i] = i;
    }
    
    for(int i = 2; i < N; i++) {
        if(spf[i] == i) {
            for(int j = i; j < N; j += i) {
                spf[j] = min(spf[j], i);
            }
        }
    }
  
    
    int n;
    cin >> n;
    
    ok(n);

  
}
