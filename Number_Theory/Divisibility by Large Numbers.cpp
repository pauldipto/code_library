
#include <bits/stdc++.h>
using namespace std;

#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));

bool check(string a, int b) {
    int ans = 0;
    for(int i = 0; i < a.size(); i++) {
        ans = (ans * 10 + (a[i] - '0')) % b;
    }
    
    if(ans == 0)
    return 1;
    else
    return 0;
}

int main()
{
    fastread();
    
}
