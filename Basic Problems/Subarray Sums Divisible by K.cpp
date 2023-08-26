
#include <bits/stdc++.h>
using namespace std;


int subarraysDivByK(vector<int> nums, int k) {
    int count = 0;
    int sum = 0;
    unordered_map<int, int> m;
    m[0]++;
    
    for(auto i : nums) {
        sum += i;
        if(m[(sum % k + k) % k] > 0) {
            count += m[(sum % k + k) % k];
        }
        m[(sum % k + k) % k]++;
    }
    return count;
}

    

int main()
{
   
    
    
        
}
