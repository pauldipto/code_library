
#include <bits/stdc++.h>
using namespace std;


#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));


int countPairs(vector<int> nums, int k) {
    unordered_map<int, int> mp;
    int ans = 0;
    
    for(auto i : nums) {
        int rem = i % k;
        if(rem != 0) {
            ans += mp[ k - rem ];
        }
        else {
            ans += mp[0];
        }
        
        mp[rem]++;
    }
    
    return ans;
}

int main()
{
    fastread();
    
    
    
}
