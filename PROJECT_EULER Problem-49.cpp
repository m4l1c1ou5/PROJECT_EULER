#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;
vector<ll> SieveOfEratosthenes(int n){ 
    vector<ll> hash; 
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
          hash.push_back(p); 
    return hash;
} 
bool permute(ll a,ll b,ll c){
    ll an[10];
    for(int i=0;i<10;i++)
        an[i]=0;
    while(a>0){
        an[a%10]++;
        a/=10;
    }
    ll bn[10];
    for(int i=0;i<10;i++)
        bn[i]=0;
    while(b>0){
        bn[b%10]++;
        b/=10;
    }
    for(int i=0;i<10;i++){
        if(an[i]!=bn[i])
            return 0;
    }
    for(int i=0;i<10;i++)
        bn[i]=0;
    while(c>0){
        bn[c%10]++;
        c/=10;
    }
    for(int i=0;i<10;i++){
        if(an[i]!=bn[i])
            return 0;
    }
    return 1;
}
int main(){
    ll n=9999;
    vector<ll> hash;
    hash=SieveOfEratosthenes(n);
    for(ll i=0;i<hash.size();i++){
        for(ll j=i+1;j<hash.size();j++){
            for(ll k=j+1;k<hash.size();k++){
                if(hash[j]-hash[i]==hash[k]-hash[j] && hash[i]>999 && permute(hash[i],hash[j],hash[k])){
                    cout<<hash[i]<<" "<<hash[j]<<" "<<hash[k]<<"\n";
                }
            }
        }
    }
}
