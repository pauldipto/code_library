
#include <bits/stdc++.h>
using namespace std;


//#define N                   1e7 + 10
#define FOR(i, a)           for (int i = 0; i < (a); i++)
#define F0R(i, a, b)        for (int i = (a); i < (b); i++)




#define ll                  long long
#define PI                  3.1415926535897932384626
#define mod                 1000000007
#define vi                  vector<int>
#define vll                 vector<long long>
#define vb                  vector<bool>
#define vs                  vector<string>
#define pii                 pair<int,int>
#define pll                 pair<ll,ll>
#define vpii                vector<pair<int, int> >
#define vpll                vector<pair<ll,ll> >
#define pb                  push_back
#define mp                  make_pair
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));


const int N = 1e6+9;
int spf[N];
int gcf[N];

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
                gcf[j] = i;
            }
        }
    }
    
    // cout<<spf[22]<<endl;
    // cout<<gcf[22]<<endl;
    
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        
        cout<<spf[x]<<" ";
       
        cout<<gcf[x]<<" ";
        
        
        int distinct_prime_factors = 0;
        int total_prime_factors = 0;
        int number_of_divisors = 1;
        ll sum_of_divisors = 1;
        while(x > 1) {
            int k = spf[x];
            distinct_prime_factors++;
            int power_of_k = 0;
            int prime_power = 1;
            
            while(x % k == 0) {
                total_prime_factors++;
                ++power_of_k;
                prime_power *= k;
                x /= k;
            }
            
            number_of_divisors *= (power_of_k + 1);
            sum_of_divisors *= ( 1LL * prime_power * k - 1) / (k - 1);
        }
        
       
       cout<<distinct_prime_factors<<" ";
       
       cout<<total_prime_factors<<" ";  
       
       cout<<number_of_divisors<<" ";
       
       cout<<sum_of_divisors<<'\n';     
        
    }
        
        
        
    
        
        
      
    
    
    
}
