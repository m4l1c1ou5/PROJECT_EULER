#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;
vector<bool> SieveOfEratosthenes(int n){ 
    vector<bool> hash(1000000); 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=n; p++){ 
        if (prime[p] == true){  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          hash[p]=1; 
    return hash;
} 
ll fun(vector<bool> hash,ll a,ll b){
    for(ll i=0;;i++){
        if(i*i+a*i+b<=1)
            return i;
        if(!hash[i*i+a*i+b])
            return i;
    }
}
int main(){
    vector<bool> hash(1000000);
    hash=SieveOfEratosthenes(1000000);
    ll max=-10000,a,b;
    for(ll i=-999;i<=999;i++){
        for(ll j=-1000;j<=1000;j++){
            ll temp=fun(hash,i,j);
            if(temp>max){
                max=temp;
                a=i;
                b=j;
            }
        }
    }
    cout<<a*b;
}
