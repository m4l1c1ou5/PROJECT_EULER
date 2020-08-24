#include <iostream> 
#define ll long long
using namespace std; 
ll SieveOfEratosthenes(ll n){  
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    for (ll p=2; p*p<=n; p++){ 
        if (prime[p] == true){ 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    ll sum=0;
    for (ll p=2; p<=n; p++) 
       if (prime[p]) 
          sum+=p;
    return sum;
} 
int main(){ 
    cout<<SieveOfEratosthenes(2000000); 
    return 0; 
} 
