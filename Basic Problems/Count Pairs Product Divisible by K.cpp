
#include <bits/stdc++.h>
using namespace std;

#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));

// (No1 * No2) % k == 0
// (gcd(No1, k) * gcd(No2, k)) % k == 0
// No1 : 363 - 11*11*3
// No2 : 91 - 13*7
// key : 21 - 3*7


int countPairs(vector<int> nums, int key) {
    int ans = 0;
    unordered_map<int, int> mp;
    
    for(auto ele : nums) {
        int gcd = __gcd(ele, key);
        int x = key / gcd;
        
        for(auto it : mp) {
            if(it.first % x == 0)
            ans += it.second;
        }
        
        mp[gcd]++;
    }
    
    return ans;
}

int main()
{
    fastread();
    
    
    
    
}
