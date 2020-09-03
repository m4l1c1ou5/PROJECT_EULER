#include<iostream>
#include<vector>
#include<math.h>
#define ll long long 
#define vl vector<ll>
using namespace std;
ll fifth(ll n){
    ll sum=0;
    while(n>0){
        sum+=pow(n%10,5);
        n=n/10;
    }
    return sum;
}
int main(){
    ll sum=0;
    for(ll i=2;i<10000000;i++){
        if(i==fifth(i)){
            sum+=i;
        }
    }
    cout<<sum;
}
